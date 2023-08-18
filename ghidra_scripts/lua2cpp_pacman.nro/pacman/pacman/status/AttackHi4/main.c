
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPacman::status::AttackHi4_main(L2CFighterPacman *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  Hash40 HVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack304 [16];
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
  
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack128,0xa5598d745);
  lib::L2CValue::operator_(aLStack144,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,FIGHTER_STATUS_ATTACK_FLAG_SMASH_SMASH_HOLD_TO_ATTACK);
  iVar6 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar6);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack176,FIGHTER_STATUS_ATTACK_WORK_FLOAT_SMASH_RESTART_FRAME);
  iVar6 = lib::L2CValue::as_integer(aLStack176);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar6);
  lib::L2CValue::L2CValue(aLStack128,fVar8);
  lib::L2CValue::operator_(aLStack160,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  HVar7 = lib::L2CValue::as_hash(aLStack144);
  fVar8 = (float)lib::L2CValue::as_number(aLStack160);
  fVar9 = (float)lib::L2CValue::as_number(aLStack128);
  app::lua_bind::MotionModule__change_motion_force_inherit_frame_impl
            (this->moduleAccessor,HVar7,fVar8,fVar9,0.0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PACMAN_MOTION_PART_SET_KIND_MATERIAL);
  lib::L2CValue::L2CValue(aLStack176,0x5035390a1);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,1.0);
  lib::L2CValue::L2CValue(aLStack224,true);
  lib::L2CValue::L2CValue(aLStack240,false);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,false);
  lib::L2CValue::L2CValue(aLStack288,true);
  lib::L2CValue::L2CValue(aLStack304,true);
  iVar6 = lib::L2CValue::as_integer(aLStack128);
  HVar7 = lib::L2CValue::as_hash(aLStack176);
  fVar8 = (float)lib::L2CValue::as_number(aLStack192);
  fVar9 = (float)lib::L2CValue::as_number(aLStack208);
  bVar1 = lib::L2CValue::as_bool(aLStack224);
  bVar2 = lib::L2CValue::as_bool(aLStack240);
  fVar10 = (float)lib::L2CValue::as_number(aLStack256);
  bVar3 = lib::L2CValue::as_bool(aLStack272);
  bVar4 = lib::L2CValue::as_bool(aLStack288);
  bVar5 = lib::L2CValue::as_bool(aLStack304);
  app::lua_bind::MotionModule__add_motion_partial_impl
            (this->moduleAccessor,iVar6,HVar7,fVar8,fVar9,(bool)(bVar1 & 1),(bool)(bVar2 & 1),fVar10
             ,(bool)(bVar3 & 1),(bool)(bVar4 & 1),(bool)(bVar5 & 1));
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,true);
  FUN_710001aac0(this);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack176,AttackHi4_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x50);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

