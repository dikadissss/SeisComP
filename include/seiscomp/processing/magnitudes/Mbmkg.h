/***************************************************************************
 * Copyright (C) gempa GmbH                                                *
 * All rights reserved.                                                    *
 * Contact: gempa GmbH (seiscomp-dev@gempa.de)                             *
 *                                                                         *
 * GNU Affero General Public License Usage                                 *
 * This file may be used under the terms of the GNU Affero                 *
 * Public License version 3.0 as published by the Free Software Foundation *
 * and appearing in the file LICENSE included in the packaging of this     *
 * file. Please review the following information to ensure the GNU Affero  *
 * Public License version 3.0 requirements will be met:                    *
 * https://www.gnu.org/licenses/agpl-3.0.html.                             *
 *                                                                         *
 * Other Usage                                                             *
 * Alternatively, this file may be used in accordance with the terms and   *
 * conditions contained in a signed written agreement between you and      *
 * gempa GmbH.                                                             *
 ***************************************************************************/


#ifndef SEISCOMP_PROCESSING_MAGNITUDEPROCESSOR_Mbmkg_H
#define SEISCOMP_PROCESSING_MAGNITUDEPROCESSOR_Mbmkg_H


#include <seiscomp/processing/magnitudeprocessor.h>
#include <seiscomp/processing/magnitudes/utils.h>
#include <seiscomp/math/geo.h>


namespace Seiscomp {
namespace Processing {


class SC_SYSTEM_CLIENT_API MagnitudeProcessor_Mbmkg : public MagnitudeProcessor {
	public:
		MagnitudeProcessor_Mbmkg();


	public:
		bool setup(const Settings &settings) override;

		std::string amplitudeType() const override;


	protected:
		Status computeMagnitude(double amplitude, const std::string &unit,
		                        double period, double snr,
		                        double delta, double depth,
		                        const DataModel::Origin *hypocenter,
		                        const DataModel::SensorLocation *receiver,
		                        const DataModel::Amplitude *,
		                        const Locale *,
		                        double &value) override;

	protected:
		bool initLocale(Locale *locale, const Settings &settings,
		                const std::string &configPrefix) override;

	private:
		double      _minDistanceKm{-1.0};
		double      _maxDistanceKm{8.0 * KM_OF_DEGREE};
		double      _maxDepth{80.0};
		std::string _distanceMode{"hypocentral"};
		std::string _calibrationType{"parametric"};

		// parameters for parametric magnitude calibration
		double      _a1{1.342};
		double      _a2{0.0002305};
		double      _a3{-1.353};
		double      _b{1.0};
};


}
}


#endif
