
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPacmanFirehydrant::status::DownFall_main_loop
          (L2CWeaponPacmanFirehydrant *this,L2CValue *return_value)

{
  byte bVar1;
  GroundCorrectKind GVar2;
  int iVar3;
  L2CValue *this_00;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  uint uVar7;
  long lVar8;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,SITUATION_KIND_AIR);
  uVar4 = lib::L2CValue::operator__(this_00,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,GROUND_CORRECT_KIND_GROUND);
    GVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar2);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,GROUND_CORRECT_KIND_AIR);
    GVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar2);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack208,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_INT_TOUCH_POS);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar3);
  lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_INT_ROT_LR);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar3);
  lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack208);
  fVar6 = (float)app::lua_bind::PostureModule__pos_x_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar6);
  lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  fVar6 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar6);
  lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  fVar6 = (float)app::lua_bind::PostureModule__pos_z_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar6);
  lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  fVar6 = (float)app::lua_bind::PostureModule__rot_z_impl(this->moduleAccessor,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar6);
  lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack208,0x118d74daa0);
  lib::L2CValue::L2CValue(aLStack224,0xccf58bed8);
  uVar4 = lib::L2CValue::as_integer(aLStack208);
  uVar5 = lib::L2CValue::as_integer(aLStack224);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar6);
  lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  uVar4 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar4 & 1) != 0) goto LAB_710003a5c0;
  lib::L2CValue::L2CValue((L2CValue *)&local_50,90.0);
  uVar4 = lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar4 & 1) == 0) {
LAB_710003a3f8:
    lib::L2CValue::L2CValue((L2CValue *)&local_50,180.0);
    uVar4 = lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,270.0);
      uVar4 = lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,360.0);
        uVar4 = lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        if ((uVar4 & 1) == 0) goto LAB_710003a5c0;
        lib::L2CValue::operator_(aLStack160,aLStack96);
        lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,360.0);
        uVar4 = lib::L2CValue::operator__((L2CValue *)&local_50,aLStack160);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        if ((uVar4 & 1) == 0) goto LAB_710003a5c0;
        lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
        lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
      }
      else {
        lib::L2CValue::operator_(aLStack160,aLStack96);
        lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,180.0);
        uVar4 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_50);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        if ((uVar4 & 1) == 0) goto LAB_710003a5c0;
        lib::L2CValue::L2CValue((L2CValue *)&local_50,180.0);
        lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
      }
    }
    else {
      lib::L2CValue::operator_(aLStack160,aLStack96);
      lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,180.0);
      uVar4 = lib::L2CValue::operator__((L2CValue *)&local_50,aLStack160);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      if ((uVar4 & 1) == 0) goto LAB_710003a5c0;
      lib::L2CValue::L2CValue((L2CValue *)&local_50,180.0);
      lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    uVar4 = lib::L2CValue::operator_((L2CValue *)&local_50,aLStack160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar4 & 1) == 0) goto LAB_710003a3f8;
    lib::L2CValue::operator_(aLStack160,aLStack96);
    lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    uVar4 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar4 & 1) == 0) goto LAB_710003a5c0;
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
LAB_710003a5c0:
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  uVar4 = lib::L2CValue::as_number(aLStack208);
  lVar8 = lib::L2CValue::as_number(aLStack224);
  uVar7 = lib::L2CValue::as_number(aLStack160);
  local_50 = uVar4 & 0xffffffff | lVar8 << 0x20;
  uStack72 = (ulong)uVar7;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack224,GROUND_TOUCH_FLAG_DOWN);
  uVar7 = lib::L2CValue::as_integer(aLStack224);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar7);
  lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
  uVar4 = lib::L2CValue::operator__(aLStack208,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_PACMAN_FIREHYDRANT_STATUS_KIND_REMOVE);
    lib::L2CValue::L2CValue(aLStack208,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x30);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

