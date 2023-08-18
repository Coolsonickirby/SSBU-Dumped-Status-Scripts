
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterCloud::status::FinalMove_init(long this)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  Hash40 HVar5;
  L2CValue *pLVar6;
  L2CValue *return_value;
  float fVar7;
  float fVar8;
  uint uVar9;
  long lVar10;
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  undefined auStack224 [32];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  void **local_50;
  lua_State *plStack72;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_CLOUD_STATUS_FINAL_WORK_FLOAT_ATTACK_TARGET_BASE_X);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(this + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack96,fVar7);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_CLOUD_STATUS_FINAL_WORK_FLOAT_ATTACK_TARGET_BASE_Y);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(this + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack112,fVar7);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  fVar7 = (float)app::lua_bind::PostureModule__pos_x_impl
                           (*(BattleObjectModuleAccessor **)(this + 0x40));
  lib::L2CValue::L2CValue(aLStack128,fVar7);
  fVar7 = (float)app::lua_bind::PostureModule__pos_y_impl
                           (*(BattleObjectModuleAccessor **)(this + 0x40));
  lib::L2CValue::L2CValue(aLStack144,fVar7);
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_CLOUD_STATUS_FINAL_WORK_FLOAT_ATTACK_TARGET_LR);
  iVar1 = lib::L2CValue::as_integer(aLStack176);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(this + 0x40),iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar7);
  lib::L2CValue::operator_((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack176);
  fVar7 = (float)app::lua_bind::PostureModule__scale_impl
                           (*(BattleObjectModuleAccessor **)(this + 0x40));
  lib::L2CValue::L2CValue(aLStack176,fVar7);
  lib::L2CValue::L2CValue(aLStack240,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack256,0x19b92cda25);
  uVar2 = lib::L2CValue::as_integer(aLStack240);
  uVar3 = lib::L2CValue::as_integer(aLStack256);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(this + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack224,fVar7);
  lib::L2CValue::operator_((L2CValue *)auStack224,aLStack176);
  lib::L2CValue::operator_((L2CValue *)(auStack224 + 0x10),aLStack160);
  lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack240,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack256,0x19ce2beab3);
  uVar2 = lib::L2CValue::as_integer(aLStack240);
  uVar3 = lib::L2CValue::as_integer(aLStack256);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(this + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack224,fVar7);
  lib::L2CValue::operator_((L2CValue *)auStack224,aLStack176);
  lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_CLOUD_STATUS_FINAL_WORK_FLOAT_MOVE_TARGET_X);
  fVar7 = (float)lib::L2CValue::as_number((L2CValue *)auStack224);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(this + 0x40),fVar7,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::operator_((L2CValue *)(auStack224 + 0x10),(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_CLOUD_STATUS_FINAL_WORK_FLOAT_MOVE_TARGET_Y);
  fVar7 = (float)lib::L2CValue::as_number((L2CValue *)auStack224);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(this + 0x40),fVar7,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::operator_(aLStack192,aLStack128);
  lib::L2CValue::operator_((L2CValue *)(auStack224 + 0x10),aLStack144);
  fVar7 = (float)lib::L2CValue::as_number((L2CValue *)auStack224);
  fVar8 = (float)lib::L2CValue::as_number(aLStack240);
  fVar7 = (float)app::sv_math::vec2_length(fVar7,fVar8);
  lib::L2CValue::L2CValue(aLStack256,fVar7);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack288,0x143f725702);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  pLVar4 = (L2CValue *)lib::L2CValue::as_integer(aLStack288);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                    (*(BattleObjectModuleAccessor **)(this + 0x40),uVar2,(ulong)pLVar4);
  lib::L2CValue::L2CValue(aLStack272,iVar1);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::operator_(aLStack256,aLStack272);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_CLOUD_STATUS_FINAL_WORK_FLOAT_MOVE_SPEED);
  fVar7 = (float)lib::L2CValue::as_number(aLStack304);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(this + 0x40),fVar7,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack304);
  pLVar6 = aLStack240;
  lib::L2CAgent::math_atan((L2CAgent *)auStack224,pLVar6,pLVar4);
  lib::L2CAgent::math_deg((L2CAgent *)&local_50,pLVar6);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  uVar2 = lib::L2CValue::operator_(aLStack96,aLStack192);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
    lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,-1.0);
    lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  fVar7 = (float)lib::L2CValue::as_number(aLStack160);
  app::lua_bind::PostureModule__set_lr_impl(*(BattleObjectModuleAccessor **)(this + 0x40),fVar7);
  app::lua_bind::PostureModule__update_rot_y_lr_impl(*(BattleObjectModuleAccessor **)(this + 0x40));
  lib::L2CValue::operator_(aLStack304,aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,45.0);
  lib::L2CValue::operator_(aLStack336,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  uVar2 = lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,360.0);
    uVar2 = lib::L2CValue::operator_((L2CValue *)&local_50,aLStack320);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar2 & 1) == 0) goto LAB_7100007494;
    lib::L2CValue::L2CValue((L2CValue *)&local_50,360.0);
    lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::operator_(aLStack320,aLStack336);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,360.0);
    lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::operator_(aLStack320,aLStack336);
  }
  lib::L2CValue::_L2CValue(aLStack336);
LAB_7100007494:
  lib::L2CValue::L2CValue(aLStack336,0x31d39a761);
  lib::L2CValue::L2CValue(aLStack352,0.0);
  lib::L2CValue::L2CValue(aLStack368,0.0);
  HVar5 = lib::L2CValue::as_hash(aLStack336);
  uVar2 = lib::L2CValue::as_number(aLStack320);
  lVar10 = lib::L2CValue::as_number(aLStack352);
  uVar9 = lib::L2CValue::as_number(aLStack368);
  local_50 = (void **)(uVar2 & 0xffffffff | lVar10 << 0x20);
  plStack72 = (lua_State *)(ulong)uVar9;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (*(BattleObjectModuleAccessor **)(this + 0x40),HVar5,(Vector3f *)&local_50,0,0);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_CLOUD_STATUS_FINAL_WORK_FLOAT_MOVE_ANGLE);
  fVar7 = (float)lib::L2CValue::as_number(aLStack336);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(this + 0x40),fVar7,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::L2CValue(return_value,0);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

