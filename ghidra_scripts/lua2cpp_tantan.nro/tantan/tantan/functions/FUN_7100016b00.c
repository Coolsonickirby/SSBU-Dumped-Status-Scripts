
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100016b00(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  Hash40 HVar4;
  L2CValue *pLVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  Hash40MapEntry **ppHStack48;
  ulong uStack40;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&stack0xffffffffffffffd0,
             _FIGHTER_TANTAN_STATUS_SPECIAL_HI_WORK_FLOAT_GROUND_MOTION_ROT);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&stack0xffffffffffffffd0);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,fVar6);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffd0);
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffd0,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack96,0xc71359e3d);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)&stack0xffffffffffffffd0);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffd0);
  fVar6 = (float)app::lua_bind::MotionModule__frame_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffd0,fVar6);
  pLVar5 = aLStack80;
  uVar2 = lib::L2CValue::operator<((L2CValue *)&stack0xffffffffffffffd0,pLVar5);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffd0);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::operator/((L2CValue *)&stack0xffffffffffffffc0,aLStack80);
    fVar6 = (float)app::lua_bind::MotionModule__frame_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack96,fVar6);
    lib::L2CValue::operator*((L2CValue *)&stack0xffffffffffffffd0,aLStack96);
    lib::L2CValue::operator-((L2CValue *)&stack0xffffffffffffffc0,aLStack128);
    pLVar5 = aLStack112;
    lib::L2CValue::operator=((L2CValue *)&stack0xffffffffffffffc0,pLVar5);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffd0);
  }
  lib::L2CAgent::math_abs((L2CAgent *)&stack0xffffffffffffffc0,pLVar5);
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffd0,0.01);
  uVar2 = lib::L2CValue::operator<(aLStack96,(L2CValue *)&stack0xffffffffffffffd0);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffd0);
  if ((uVar2 & 1) == 0) {
    fVar6 = (float)app::lua_bind::MotionModule__frame_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
    lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffd0,fVar6);
    uVar2 = lib::L2CValue::operator<=(aLStack80,(L2CValue *)&stack0xffffffffffffffd0);
    lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffd0);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar2 & 1) == 0) goto LAB_7100016ce8;
  }
  else {
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffd0,0.0);
  lib::L2CValue::operator=
            ((L2CValue *)&stack0xffffffffffffffc0,(L2CValue *)&stack0xffffffffffffffd0);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffd0);
LAB_7100016ce8:
  lib::L2CValue::L2CValue(aLStack96,0x31d39a761);
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffd0,360.0);
  lib::L2CValue::operator-
            ((L2CValue *)&stack0xffffffffffffffd0,(L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffd0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  HVar4 = lib::L2CValue::as_hash(aLStack96);
  uVar7 = lib::L2CValue::as_number(aLStack112);
  uVar8 = lib::L2CValue::as_number(aLStack128);
  uVar9 = lib::L2CValue::as_number(aLStack144);
  ppHStack48 = (Hash40MapEntry **)CONCAT44(uVar8,uVar7);
  uStack40 = (ulong)uVar9;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar4,
             (Vector3f *)&stack0xffffffffffffffd0,0,0);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  return;
}

