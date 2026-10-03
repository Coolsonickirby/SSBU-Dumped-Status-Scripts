
void FUN_710000a4b0(L2CAgent *param_1)

{
  ulong uVar1;
  ulong uVar2;
  Hash40 HVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  undefined8 local_30;
  ulong uStack40;
  
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue(aLStack80,0xd8b96a1e1);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar1 = lib::L2CValue::as_integer(aLStack80);
  uVar2 = lib::L2CValue::as_integer(aLStack96);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_1->moduleAccessor,uVar1,uVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_30,fVar4);
  lib::L2CValue::operator=(aLStack64,(L2CValue *)&local_30);
  lib::L2CValue::~L2CValue((L2CValue *)&local_30);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x54f934137);
  HVar3 = lib::L2CValue::as_hash(aLStack80);
  uVar5 = lib::L2CValue::as_number(aLStack64);
  uVar6 = lib::L2CValue::as_number(aLStack64);
  uVar7 = lib::L2CValue::as_number(aLStack64);
  local_30 = CONCAT44(uVar6,uVar5);
  uStack40 = (ulong)uVar7;
  app::lua_bind::ModelModule__set_joint_scale_impl
            (param_1->moduleAccessor,HVar3,(Vector3f *)&local_30);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)&local_30,0x2dc1210b69);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_30);
  app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
  lib::L2CAgent::pop_lua_stack(param_1,1);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue((L2CValue *)&local_30);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

