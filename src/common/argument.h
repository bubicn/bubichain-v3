/*
Copyright Bubi Technologies Co., Ltd. 2017 All Rights Reserved.
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef ARGUMENT_H_
#define ARGUMENT_H_

#include "storage.h"

namespace bubi {
	class Argument {
	public:
		Argument();
		~Argument();

		bool help_modle_;
		bool drop_db_;

		bool update_;
		bool peer_addr_;
		bool del_peer_addr_;
		bool clear_consensus_status_;
		bool create_hardfork_;

		bool Parse(int argc, char *argv[]);
		void Usage();
		void ShowHardwareAddress();
		void ShowNodeId(int argc, char *argv[]);
		void RequestCert(int argc, char *argv[]);
		void ShowRequest(int argc, char *argv[]);
	};

	extern bool g_enable_;

	void InstallSignal();
}
#endif