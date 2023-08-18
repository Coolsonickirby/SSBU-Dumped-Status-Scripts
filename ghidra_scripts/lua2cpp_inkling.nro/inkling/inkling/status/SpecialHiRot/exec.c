
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterInkling::status::SpecialHiRot_exec(L2CFighterInkling *this,L2CValue *return_value)

{
  int iVar1;
  uint uVar2;
  MotionNodeRotateCompose MVar3;
  int iVar4;
  ulong uVar5;
  Hash40 HVar6;
  L2CValue *pLVar7;
  float fVar8;
  long lVar9;
  L2CValue aLStack176 [16];
  undefined auStack160 [32];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_INKLING_STATUS_SPECIAL_HI_WORK_FLOAT_MODEL_DEGREE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,fVar8);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_INKLING_STATUS_SPECIAL_HI_WORK_FLOAT_MODEL_REV_DEGREE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack112,fVar8);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,-1e-05);
  uVar5 = lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,1e-05);
    uVar5 = lib::L2CValue::operator_((L2CValue *)&local_50,aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar5 & 1) == 0) goto LAB_7100004ad0;
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  uVar5 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) != 0) {
    fVar8 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,fVar8);
    uVar2 = app::lua_bind::MotionModule__end_frame_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),uVar2);
    lib::L2CValue::operator_((L2CValue *)(auStack160 + 0x10),aLStack128);
    pLVar7 = aLStack176;
    lib::L2CValue::operator_(aLStack96,pLVar7);
    lib::L2CAgent::math_abs((L2CAgent *)auStack160,pLVar7);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)auStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_FIGHTER_INKLING_STATUS_SPECIAL_HI_WORK_FLOAT_MODEL_REV_DEGREE)
    ;
    fVar8 = (float)lib::L2CValue::as_number((L2CValue *)auStack160);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)auStack160);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
    lib::L2CValue::_L2CValue(aLStack128);
  }
LAB_7100004ad0:
  lib::L2CValue::L2CValue((L2CValue *)&local_50,1e-05);
  uVar5 = lib::L2CValue::operator_((L2CValue *)&local_50,aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,-1e-05);
    uVar5 = lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
      lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
    }
    else {
      lib::L2CValue::operator_(aLStack96,aLStack112);
      lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
    }
  }
  else {
    lib::L2CValue::operator_(aLStack96,aLStack112);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_INKLING_STATUS_SPECIAL_HI_WORK_FLOAT_MODEL_DEGREE);
  fVar8 = (float)lib::L2CValue::as_number(aLStack128);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,0x31d39a761);
  lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),0.0);
  lib::L2CValue::L2CValue((L2CValue *)auStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,_MOTION_NODE_ROTATE_COMPOSE_BEFORE);
  HVar6 = lib::L2CValue::as_hash(aLStack128);
  uVar5 = lib::L2CValue::as_number(aLStack96);
  lVar9 = lib::L2CValue::as_number((L2CValue *)(auStack160 + 0x10));
  uVar2 = lib::L2CValue::as_number((L2CValue *)auStack160);
  local_50 = uVar5 & 0xffffffff | lVar9 << 0x20;
  uStack72 = (ulong)uVar2;
  MVar3 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar6,(Vector3f *)&local_50,MVar3,0);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)auStack160);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_INKLING_GENERATE_ARTICLE_SQUID);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_INKLING_SQUID_INSTANCE_WORK_ID_FLOAT_SPECIAL_HI_ROT_X);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  fVar8 = (float)lib::L2CValue::as_number(aLStack96);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::ArticleModule__set_float_impl(this->moduleAccessor,iVar1,fVar8,iVar4);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

