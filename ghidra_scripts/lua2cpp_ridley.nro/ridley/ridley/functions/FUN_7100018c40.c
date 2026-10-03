
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100018c40(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  Hash40 HVar4;
  Hash40MapEntry ***pppHVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  Hash40MapEntry **appHStack112 [2];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  Hash40MapEntry **local_40;
  ulong uStack56;
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) goto LAB_7100018f3c;
  fVar6 = (float)app::lua_bind::PostureModule__rot_x_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),0);
  lib::L2CValue::L2CValue(aLStack80,fVar6);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_40,_FIGHTER_RIDLEY_STATUS_SPECIAL_HI_WORK_FLOAT_DEGREE_SPEED_X);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack96,fVar6);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,180.0);
  uVar3 = lib::L2CValue::operator<((L2CValue *)&local_40,aLStack80);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_40,-180.0);
    pppHVar5 = &local_40;
    uVar3 = lib::L2CValue::operator<(aLStack80,(L2CValue *)pppHVar5);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_40,360.0);
      lib::L2CValue::operator+(aLStack80,(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      pppHVar5 = appHStack112;
      lib::L2CValue::operator=(aLStack80,(L2CValue *)pppHVar5);
      goto LAB_7100018d7c;
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_40,360.0);
    lib::L2CValue::operator-(aLStack80,(L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    pppHVar5 = appHStack112;
    lib::L2CValue::operator=(aLStack80,(L2CValue *)pppHVar5);
LAB_7100018d7c:
    lib::L2CValue::~L2CValue((L2CValue *)appHStack112);
  }
  lib::L2CAgent::math_abs((L2CAgent *)aLStack80,(L2CValue *)pppHVar5);
  lib::L2CAgent::math_abs((L2CAgent *)aLStack96,(L2CValue *)pppHVar5);
  uVar3 = lib::L2CValue::operator<((L2CValue *)appHStack112,(L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)appHStack112);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)appHStack112,0x31d39a761);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    HVar4 = lib::L2CValue::as_hash((L2CValue *)appHStack112);
    uVar7 = lib::L2CValue::as_number(aLStack128);
    uVar8 = lib::L2CValue::as_number(aLStack144);
    uVar9 = lib::L2CValue::as_number(aLStack160);
    local_40 = (Hash40MapEntry **)CONCAT44(uVar8,uVar7);
    uStack56 = (ulong)uVar9;
    app::lua_bind::ModelModule__set_joint_rotate_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar4,(Vector3f *)&local_40,0,0);
    lib::L2CValue::~L2CValue(aLStack160);
  }
  else {
    lib::L2CValue::operator+(aLStack80,aLStack96);
    lib::L2CValue::operator=(aLStack80,(L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::L2CValue((L2CValue *)appHStack112,0x31d39a761);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    HVar4 = lib::L2CValue::as_hash((L2CValue *)appHStack112);
    uVar7 = lib::L2CValue::as_number(aLStack80);
    uVar8 = lib::L2CValue::as_number(aLStack128);
    uVar9 = lib::L2CValue::as_number(aLStack144);
    local_40 = (Hash40MapEntry **)CONCAT44(uVar8,uVar7);
    uStack56 = (ulong)uVar9;
    app::lua_bind::ModelModule__set_joint_rotate_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar4,(Vector3f *)&local_40,0,0);
  }
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue((L2CValue *)appHStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
LAB_7100018f3c:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

