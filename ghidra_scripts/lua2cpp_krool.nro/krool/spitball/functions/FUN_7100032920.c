
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100032920(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  undefined8 local_30;
  ulong uStack40;
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_KROOL_SPITBALL_INSTANCE_WORK_ID_FLOAT_ANGLE);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    fVar3 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack96,fVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_30,90.0);
    lib::L2CValue::operator-(aLStack96,(L2CValue *)&local_30);
    lib::L2CValue::~L2CValue((L2CValue *)&local_30);
    lib::L2CValue::operator-(aLStack80);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    uVar4 = lib::L2CValue::as_number(aLStack64);
    uVar5 = lib::L2CValue::as_number(aLStack128);
    uVar6 = lib::L2CValue::as_number(aLStack144);
    local_30 = CONCAT44(uVar5,uVar4);
    uStack40 = (ulong)uVar6;
    app::lua_bind::PostureModule__set_rot_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),(Vector3f *)&local_30,0);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

