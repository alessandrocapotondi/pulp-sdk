/*
 * Copyright (C) 2021 ETH Zurich and University of Bologna
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * Authors:  Angelo Garofalo <angelo.garofalo@studio.unibo.it>
 * redMule GVSOC model -- Debug methods
 */

 #include <redMule.hpp>

// Debug input buffer
/**
    TO DO!
**/
void redMule::debug_input_buffer(){
    std:ostringstream stringStream;
    stringStream << "Put here debug string <n";
    std::string string_to_traces = stringStream.str();
    this->trace.msg(vp::trace::LEVEL_DEBUG, string_to_traces.c_str());
}

/**
    ADD OTHER DEBUG FUNCTIONS
**/