
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDuckhuntCan::status::Ready_main_loop(L2CWeaponDuckhuntCan *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *this_00;
  Hash40 HVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  undefined8 local_c0;
  ulong uStack184;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  undefined8 auStack112 [2];
  float local_60;
  float fStack92;
  ulong uStack88;
  
  fVar6 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,0.5);
  uVar4 = lib::L2CValue::operator_((L2CValue *)&local_60,(L2CValue *)&local_c0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar4 & 1) == 0) {
    fVar6 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,10.0);
    uVar4 = lib::L2CValue::operator_((L2CValue *)&local_60,(L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar4 & 1) != 0) {
      fVar6 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)auStack112,fVar6);
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,0.1);
      lib::L2CValue::operator_((L2CValue *)auStack112,(L2CValue *)&local_c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
      fVar6 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
      app::lua_bind::PostureModule__set_scale_impl(this->moduleAccessor,fVar6,false);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      this_00 = auStack112;
      goto LAB_710001d67c;
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,1.0);
    fVar6 = (float)lib::L2CValue::as_number((L2CValue *)&local_c0);
    app::lua_bind::PostureModule__set_scale_impl(this->moduleAccessor,fVar6,false);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,0.05);
    fVar6 = (float)lib::L2CValue::as_number((L2CValue *)&local_c0);
    app::lua_bind::PostureModule__set_scale_impl(this->moduleAccessor,fVar6,false);
  }
  this_00 = &local_c0;
LAB_710001d67c:
  lib::L2CValue::_L2CValue((L2CValue *)this_00);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLAG_FLY);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_c0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)auStack112);
    lib::L2CValue::L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack208,0x3633cbad2);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    HVar5 = lib::L2CValue::as_hash(aLStack208);
    local_60 = (float)lib::L2CValue::as_number(aLStack224);
    fStack92 = (float)lib::L2CValue::as_number(aLStack240);
    uVar7 = lib::L2CValue::as_number(aLStack256);
    uStack88 = (ulong)uVar7;
    app::lua_bind::ModelModule__joint_global_position_impl
              (this->moduleAccessor,HVar5,(Vector3f *)&local_60,true);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,local_60);
    lib::L2CValue::L2CValue(aLStack176,fStack92);
    lib::L2CValue::L2CValue(aLStack160,(float)uStack88);
    lib::L2CValue::operator_((L2CValue *)auStack112,(L2CValue *)&local_c0);
    lib::L2CValue::operator_(aLStack128,aLStack176);
    lib::L2CValue::operator_(aLStack144,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack224);
    lib::L2CValue::L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack256,0x3633cbad2);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    HVar5 = lib::L2CValue::as_hash(aLStack256);
    fVar6 = (float)lib::L2CValue::as_number(aLStack272);
    fVar8 = (float)lib::L2CValue::as_number(aLStack288);
    uVar7 = lib::L2CValue::as_number(aLStack304);
    uStack88 = (ulong)uVar7;
    local_60 = fVar6;
    fStack92 = fVar8;
    app::lua_bind::ModelModule__joint_rotate_impl(this->moduleAccessor,HVar5,(Vector3f *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,local_60);
    lib::L2CValue::L2CValue(aLStack176,fStack92);
    lib::L2CValue::L2CValue(aLStack160,(float)uStack88);
    lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_c0);
    lib::L2CValue::operator_(aLStack224,aLStack176);
    lib::L2CValue::operator_(aLStack240,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,0.0);
    uVar4 = lib::L2CValue::operator_((L2CValue *)&local_60,(L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,180.0);
      lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_c0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
      lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    }
    app::lua_bind::LinkModule__remove_model_constraint_impl(this->moduleAccessor,true);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,_WEAPON_DUCKHUNT_CAN_LINK_NO);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
    app::lua_bind::LinkModule__unlink_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    uVar9 = lib::L2CValue::as_number((L2CValue *)auStack112);
    uVar10 = lib::L2CValue::as_number(aLStack128);
    uVar7 = lib::L2CValue::as_number((L2CValue *)&local_60);
    local_c0 = CONCAT44(uVar10,uVar9);
    uStack184 = (ulong)uVar7;
    app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_c0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    uVar9 = lib::L2CValue::as_number(aLStack208);
    uVar10 = lib::L2CValue::as_number(aLStack224);
    uVar7 = lib::L2CValue::as_number(aLStack240);
    local_c0 = CONCAT44(uVar10,uVar9);
    uStack184 = (ulong)uVar7;
    app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_c0,0);
    lib::L2CValue::L2CValue((L2CValue *)&local_c0,_WEAPON_DUCKHUNT_CAN_STATUS_KIND_FLY);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_c0);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue((L2CValue *)auStack112);
  }
  return;
}

