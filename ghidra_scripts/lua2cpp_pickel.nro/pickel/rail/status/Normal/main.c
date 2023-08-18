
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPickelRail::status::Normal_main(L2CWeaponPickelRail *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  Hash40 HVar5;
  uint uVar6;
  float fVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  ulong local_70;
  ulong uStack104;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  ulong local_40;
  undefined8 uStack56;
  
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_PICKEL_RAIL_INSTANCE_WORK_ID_FLAG_TYPE_AIR);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,(bool)(bVar1 & 1));
  lib::L2CValue::operator_((L2CValue *)&local_40);
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    uVar8 = app::lua_bind::PostureModule__pos_2d_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,(float)uVar8);
    lib::L2CValue::L2CValue(aLStack96,(float)((ulong)uVar8 >> 0x20));
    uVar9 = lib::L2CValue::as_number((L2CValue *)&local_70);
    uVar6 = lib::L2CValue::as_number(aLStack96);
    local_40 = uVar9 & 0xffffffff | (ulong)uVar6 << 0x20;
    uStack56 = 0;
    app::lua_bind::GroundModule__set_shape_safe_pos_impl(this->moduleAccessor,(Vector2f *)&local_40)
    ;
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,GROUND_CORRECT_KIND_GROUND);
    GVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_40,true);
  FUN_710009da60(this,&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_PICKEL_RAIL_INSTANCE_WORK_ID_FLAG_TYPE_AIR);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_WEAPON_ANIMCMD_GAME);
    lib::L2CValue::L2CValue(aLStack128,0x1633eb2e07);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    HVar5 = lib::L2CValue::as_hash(aLStack128);
    app::lua_bind::MotionAnimcmdModule__call_script_single_impl(this->moduleAccessor,iVar3,HVar5,-1)
    ;
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_WEAPON_ANIMCMD_GAME);
    lib::L2CValue::L2CValue(aLStack128,0x1985f09c91);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    HVar5 = lib::L2CValue::as_hash(aLStack128);
    app::lua_bind::MotionAnimcmdModule__call_script_single_impl(this->moduleAccessor,iVar3,HVar5,-1)
    ;
  }
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_WEAPON_ANIMCMD_EFFECT);
  lib::L2CValue::L2CValue(aLStack128,0x183a465dec);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  HVar5 = lib::L2CValue::as_hash(aLStack128);
  app::lua_bind::MotionAnimcmdModule__call_script_single_impl(this->moduleAccessor,iVar3,HVar5,-1);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  fVar7 = (float)app::lua_bind::GroundModule__get_width_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,fVar7);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0.5);
  lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,_GROUND_TOUCH_FLAG_LEFT);
  uVar6 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((bVar2 & 1U) != 0) {
    fVar7 = (float)app::lua_bind::PostureModule__pos_x_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack160,fVar7);
    lib::L2CValue::operator_(aLStack160,aLStack128);
    fVar7 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack176,fVar7);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    uVar9 = lib::L2CValue::as_number(aLStack144);
    lVar10 = lib::L2CValue::as_number(aLStack176);
    uVar6 = lib::L2CValue::as_number(aLStack192);
    local_70 = uVar9 & 0xffffffff | lVar10 << 0x20;
    uStack104 = (ulong)uVar6;
    app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_70);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  lib::L2CValue::L2CValue(aLStack144,GROUND_TOUCH_FLAG_RIGHT);
  uVar6 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((bVar2 & 1U) != 0) {
    fVar7 = (float)app::lua_bind::PostureModule__pos_x_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack160,fVar7);
    lib::L2CValue::operator_(aLStack160,aLStack128);
    fVar7 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack176,fVar7);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    uVar9 = lib::L2CValue::as_number(aLStack144);
    lVar10 = lib::L2CValue::as_number(aLStack176);
    uVar6 = lib::L2CValue::as_number(aLStack192);
    local_70 = uVar9 & 0xffffffff | lVar10 << 0x20;
    uStack104 = (ulong)uVar6;
    app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_70);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,Normal_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  return;
}

