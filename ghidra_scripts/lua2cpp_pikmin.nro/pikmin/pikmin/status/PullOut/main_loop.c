
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPikminPikmin::status::PullOut_main_loop(L2CWeaponPikminPikmin *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  GroundCorrectKind GVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined8 local_60;
  undefined8 uStack88;
  undefined8 local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  iVar2 = app::lua_bind::GroundModule__get_correct_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_GROUND_CORRECT_KIND_NONE);
  uVar4 = lib::L2CValue::operator__((L2CValue *)&local_60,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  this_00 = &this->globalTable;
  if ((uVar4 & 1) != 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,2.0);
    uVar4 = lib::L2CValue::operator_((L2CValue *)&local_50,pLVar5);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,GROUND_CORRECT_KIND_AIR);
      GVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    }
  }
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(pLVar5,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_PULL_OUT_LANDING);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_710004e1f4;
  }
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,300.0);
  uVar4 = lib::L2CValue::operator__((L2CValue *)&local_50,pLVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_WEAPON_PIKMIN_PIKMIN_STATUS_KIND_PULL_OUT_LANDING);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_710004e1f4;
  }
  fVar6 = (float)app::lua_bind::PostureModule__pos_x_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar6);
  lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_PIKMIN_PIKMIN_STATUS_PULL_OUT_WORK_FLOAT_OWNER_X);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar6);
  lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar6);
  lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
  uVar4 = lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if (((uVar4 & 1) == 0) ||
     (uVar4 = lib::L2CValue::operator__(aLStack208,aLStack224), (uVar4 & 1) == 0)) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
    uVar4 = lib::L2CValue::operator__((L2CValue *)&local_50,aLStack160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if (((uVar4 & 1) != 0) &&
       (uVar4 = lib::L2CValue::operator__(aLStack224,aLStack208), (uVar4 & 1) != 0))
    goto LAB_710004df3c;
  }
  else {
LAB_710004df3c:
    fVar6 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar6);
    lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue(aLStack256,_WEAPON_PIKMIN_PIKMIN_STATUS_PULL_OUT_WORK_FLOAT_GROUND_Y);
    iVar2 = lib::L2CValue::as_integer(aLStack256);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack240,fVar6);
    lib::L2CValue::operator_(aLStack176,aLStack240);
    lib::L2CValue::operator_((L2CValue *)&local_60);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,20.0);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue(aLStack256,true);
    uVar7 = lib::L2CValue::as_number(aLStack224);
    uVar8 = lib::L2CValue::as_number(aLStack176);
    local_50 = CONCAT44(uVar8,uVar7);
    uStack72 = 0;
    uVar7 = lib::L2CValue::as_number(aLStack144);
    uVar8 = lib::L2CValue::as_number(aLStack128);
    local_60 = CONCAT44(uVar8,uVar7);
    uStack88 = 0;
    bVar1 = lib::L2CValue::as_bool(aLStack256);
    bVar1 = app::lua_bind::GroundModule__ray_check_impl
                      (this->moduleAccessor,(Vector2f *)&local_50,(Vector2f *)&local_60,
                       (bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
    uVar4 = lib::L2CValue::operator__((L2CValue *)&local_50,aLStack240);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack256);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      fVar6 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar6);
      lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::operator_(aLStack224,aLStack192);
      lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      fVar6 = (float)app::lua_bind::PostureModule__pos_z_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar6);
      lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      uVar7 = lib::L2CValue::as_number(aLStack224);
      uVar8 = lib::L2CValue::as_number(aLStack176);
      uVar9 = lib::L2CValue::as_number(aLStack112);
      local_50 = CONCAT44(uVar8,uVar7);
      uStack72 = (ulong)uVar9;
      app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710004e1f4:
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

