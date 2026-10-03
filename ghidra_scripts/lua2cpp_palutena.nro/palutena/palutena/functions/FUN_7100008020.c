
void FUN_7100008020(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  Hash40 HVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  undefined8 local_30;
  ulong uStack40;
  
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack128,0x158764f70f);
  uVar1 = lib::L2CValue::as_integer(aLStack112);
  uVar2 = lib::L2CValue::as_integer(aLStack128);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar1,uVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_30,fVar4);
  lib::L2CValue::operator=(aLStack64,(L2CValue *)&local_30);
  lib::L2CValue::~L2CValue((L2CValue *)&local_30);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack128,0x15f063c799);
  uVar1 = lib::L2CValue::as_integer(aLStack112);
  uVar2 = lib::L2CValue::as_integer(aLStack128);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar1,uVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_30,fVar4);
  lib::L2CValue::operator=(aLStack96,(L2CValue *)&local_30);
  lib::L2CValue::~L2CValue((L2CValue *)&local_30);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack128,0x15696a9623);
  uVar1 = lib::L2CValue::as_integer(aLStack112);
  uVar2 = lib::L2CValue::as_integer(aLStack128);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar1,uVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_30,fVar4);
  lib::L2CValue::operator=(aLStack80,(L2CValue *)&local_30);
  lib::L2CValue::~L2CValue((L2CValue *)&local_30);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0xdbc400ef7);
  HVar3 = lib::L2CValue::as_hash(aLStack112);
  uVar5 = lib::L2CValue::as_number(aLStack64);
  uVar6 = lib::L2CValue::as_number(aLStack96);
  uVar7 = lib::L2CValue::as_number(aLStack80);
  local_30 = CONCAT44(uVar6,uVar5);
  uStack40 = (ulong)uVar7;
  app::lua_bind::ModelModule__set_joint_scale_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar3,(Vector3f *)&local_30);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

