
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100028fe0(undefined8 param_1,L2CFighterCommon *param_2,L2CValue *param_3,L2CValue *param_4
                   ,L2CValue *param_5)

{
  int iVar1;
  long lVar2;
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DEMON_STATUS_SPECIAL_LW_INT_PARAM_ID_HASH);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  lVar2 = app::lua_bind::WorkModule__get_int64_impl(param_2->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,lVar2);
  lua2cpp::L2CFighterCommon::sub_set_special_start_common_kinetic_setting(param_2,(L2CValue)0xa0);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack144,param_3);
  lib::L2CValue::L2CValue(aLStack160,param_4);
  lib::L2CValue::L2CValue(aLStack176,param_5);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (param_2,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  lib::L2CValue::L2CValue(aLStack192,_ENERGY_MOTION_RESET_TYPE_AIR_TRANS);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)param_2);
  lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack112);
  lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack192);
  lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack208);
  lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack224);
  lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack240);
  lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack256);
  lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack272);
  app::sv_kinetic_energy::reset_energy(param_2->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)param_2);
  lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack112);
  app::sv_kinetic_energy::enable(param_2->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack288,L2CFighterDemon::status::SpecialLw_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(param_2,(L2CValue)0xe0);
  lib::L2CValue::~L2CValue(aLStack288);
  return;
}

