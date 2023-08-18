
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterRyu::status::FinalHit_main(L2CFighterRyu *this,L2CValue *return_value)

{
  byte bVar1;
  HitStatus HVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  Hash40 HVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  undefined8 uStack88;
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_RYU_FINAL_CAMERA_OFFSET_1);
  FUN_7100040550(this,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack144,0x12a3430c51);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  uVar6 = lib::L2CValue::as_integer(aLStack144);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar8);
  fVar8 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
  app::lua_bind::AttackModule__set_damage_shake_scale_impl(this->moduleAccessor,fVar8);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_60);
  app::lua_bind::MotionModule__set_trans_move_speed_no_scale_impl
            (this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack128,false);
  FUN_710003dbe0(this,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_HIT_STATUS_XLU);
  HVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar2,0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack144,1.1);
  fVar8 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,fVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,1.0);
  uVar5 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar5 & 1) != 0) {
    fVar8 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack160,fVar8);
    lib::L2CValue::operator_(aLStack144,aLStack160);
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  lib::L2CValue::L2CValue(aLStack160,5);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,true);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  iVar4 = lib::L2CValue::as_integer(aLStack176);
  fVar8 = (float)lib::L2CValue::as_number(aLStack144);
  uVar5 = lib::L2CValue::as_number(aLStack192);
  uVar9 = lib::L2CValue::as_number(aLStack208);
  local_60 = uVar5 & 0xffffffff | (ulong)uVar9 << 0x20;
  uStack88 = 0;
  bVar1 = lib::L2CValue::as_bool(aLStack224);
  app::lua_bind::CameraModule__zoom_in_impl
            (this->moduleAccessor,iVar3,iVar4,fVar8,(Vector2f *)&local_60,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x974cac6bc);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,1.0);
  lib::L2CValue::L2CValue(aLStack192,false);
  HVar7 = lib::L2CValue::as_hash((L2CValue *)&local_60);
  fVar8 = (float)lib::L2CValue::as_number(aLStack160);
  fVar10 = (float)lib::L2CValue::as_number(aLStack176);
  bVar1 = lib::L2CValue::as_bool(aLStack192);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar7,fVar8,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,FinalHit_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

