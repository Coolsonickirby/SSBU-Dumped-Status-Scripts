
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPacmanTrampoline::status::Shake_main
          (L2CWeaponPacmanTrampoline *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  Hash40 HVar7;
  L2CValue *pLVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [24];
  
  lib::L2CValue::L2CValue(aLStack152,false);
  bVar1 = lib::L2CValue::as_bool(aLStack152);
  app::lua_bind::MotionModule__enable_shift_material_animation_impl
            (this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::L2CValue(aLStack152,0x574063442);
  lib::L2CValue::L2CValue(aLStack168,0.0);
  lib::L2CValue::L2CValue(aLStack184,1.0);
  lib::L2CValue::L2CValue(aLStack200,false);
  HVar7 = lib::L2CValue::as_hash(aLStack152);
  fVar10 = (float)lib::L2CValue::as_number(aLStack168);
  fVar11 = (float)lib::L2CValue::as_number(aLStack184);
  bVar1 = lib::L2CValue::as_bool(aLStack200);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar7,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::L2CValue(aLStack152,true);
  bVar1 = lib::L2CValue::as_bool(aLStack152);
  app::lua_bind::MotionModule__enable_shift_material_animation_impl
            (this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::L2CValue(aLStack152,_WEAPON_PACMAN_TRAMPOLINE_MOTION_PART_SET_KIND_MATERIAL);
  lib::L2CValue::L2CValue(aLStack168,0x5665648e9);
  lib::L2CValue::L2CValue(aLStack184,0.0);
  lib::L2CValue::L2CValue(aLStack200,0.0);
  lib::L2CValue::L2CValue(aLStack216,false);
  lib::L2CValue::L2CValue(aLStack232,false);
  lib::L2CValue::L2CValue(aLStack248,0.0);
  lib::L2CValue::L2CValue(aLStack264,false);
  lib::L2CValue::L2CValue(aLStack280,false);
  lib::L2CValue::L2CValue(aLStack296,true);
  iVar6 = lib::L2CValue::as_integer(aLStack152);
  HVar7 = lib::L2CValue::as_hash(aLStack168);
  fVar10 = (float)lib::L2CValue::as_number(aLStack184);
  fVar11 = (float)lib::L2CValue::as_number(aLStack200);
  bVar1 = lib::L2CValue::as_bool(aLStack216);
  bVar2 = lib::L2CValue::as_bool(aLStack232);
  fVar12 = (float)lib::L2CValue::as_number(aLStack248);
  bVar3 = lib::L2CValue::as_bool(aLStack264);
  bVar4 = lib::L2CValue::as_bool(aLStack280);
  bVar5 = lib::L2CValue::as_bool(aLStack296);
  app::lua_bind::MotionModule__add_motion_partial_impl
            (this->moduleAccessor,iVar6,HVar7,fVar10,fVar11,(bool)(bVar1 & 1),(bool)(bVar2 & 1),
             fVar12,(bool)(bVar3 & 1),(bool)(bVar4 & 1),(bool)(bVar5 & 1));
  lib::L2CValue::_L2CValue(aLStack296);
  lib::L2CValue::_L2CValue(aLStack280);
  lib::L2CValue::_L2CValue(aLStack264);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack152,_WEAPON_PACMAN_TRAMPOLINE_STATUS_KIND_START);
  uVar9 = lib::L2CValue::operator__(pLVar8,aLStack152);
  lib::L2CValue::_L2CValue(aLStack152);
  if ((uVar9 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack152,_WEAPON_PACMAN_TRAMPOLINE_MOTION_PART_SET_KIND_MATERIAL);
    lib::L2CValue::L2CValue(aLStack168,_PACMAN_TRAMPOLINE_COLOR_BLUE);
    iVar6 = lib::L2CValue::as_integer(aLStack152);
    fVar10 = (float)lib::L2CValue::as_number(aLStack168);
    app::lua_bind::MotionModule__set_frame_partial_impl(this->moduleAccessor,iVar6,fVar10,true);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::L2CValue(aLStack152,_WEAPON_PACMAN_TRAMPOLINE_MOTION_PART_SET_KIND_MATERIAL);
    lib::L2CValue::L2CValue(aLStack168,0.0);
    iVar6 = lib::L2CValue::as_integer(aLStack152);
    fVar10 = (float)lib::L2CValue::as_number(aLStack168);
    app::lua_bind::MotionModule__set_rate_partial_impl(this->moduleAccessor,iVar6,fVar10);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack152);
  }
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack168,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack152,false);
  uVar9 = lib::L2CValue::operator__(aLStack168,aLStack152);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack168);
  if ((uVar9 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack184,false);
    FUN_7100048c60(aLStack168,this,aLStack184);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack184);
  }
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue(aLStack152,&DAT_7100048d20);
  lib::L2CValue::operator_(pLVar8,aLStack152);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::L2CValue(aLStack152,Shake_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x68);
  lib::L2CValue::_L2CValue(aLStack152);
  return;
}

