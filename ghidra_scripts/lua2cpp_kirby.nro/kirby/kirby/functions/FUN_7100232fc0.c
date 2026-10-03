
void FUN_7100232fc0(undefined8 param_1,L2CFighterCommon *param_2)

{
  byte bVar1;
  Hash40 HVar2;
  float fVar3;
  float fVar4;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  FUN_71001a6740(param_2);
  lib::L2CValue::L2CValue(aLStack96,0x312f3d8e87);
  lib::L2CValue::L2CValue(aLStack112,false);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)param_2);
  lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack96);
  lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack112);
  app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)param_2,1);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x12a6bf5418);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar2 = lib::L2CValue::as_hash(aLStack96);
  fVar3 = (float)lib::L2CValue::as_number(aLStack112);
  fVar4 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (param_2->moduleAccessor,HVar2,fVar3,fVar4,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  FUN_710022feb0(param_2);
  lib::L2CValue::L2CValue(aLStack160,FUN_71002331b0);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(param_2,(L2CValue)0x60);
  lib::L2CValue::~L2CValue(aLStack160);
  return;
}

