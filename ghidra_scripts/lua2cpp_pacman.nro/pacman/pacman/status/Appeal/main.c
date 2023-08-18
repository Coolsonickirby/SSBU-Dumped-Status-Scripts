
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterPacman::status::Appeal_main(L2CFighterPacman *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  Hash40 HVar11;
  L2CValue *this_00;
  float fVar12;
  float fVar13;
  float fVar14;
  L2CValue aLStack344 [16];
  L2CValue aLStack328 [16];
  L2CValue aLStack312 [16];
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
  
  lua2cpp::L2CFighterCommon::status_Appeal_Common(this);
  lib::L2CValue::L2CValue(aLStack168,0);
  lib::L2CValue::L2CValue(aLStack184,0);
  lib::L2CValue::L2CValue(aLStack152,_FIGHTER_STATUS_APPEAL_WORK_INT_MOTION_KIND_R);
  iVar6 = lib::L2CValue::as_integer(aLStack152);
  lVar9 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar6);
  lib::L2CValue::L2CValue(aLStack200,lVar9);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::L2CValue(aLStack152,0xbb634be24);
  uVar10 = lib::L2CValue::operator__(aLStack200,aLStack152);
  lib::L2CValue::_L2CValue(aLStack152);
  if ((uVar10 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack152,0xb2feea709);
    uVar10 = lib::L2CValue::operator__(aLStack200,aLStack152);
    lib::L2CValue::_L2CValue(aLStack152);
    if ((uVar10 & 1) == 0) goto LAB_7100018404;
    lib::L2CValue::L2CValue(aLStack152,_FIGHTER_PACMAN_MOTION_PART_SET_KIND_MATERIAL);
    lib::L2CValue::L2CValue(aLStack216,0x5035390a1);
    lib::L2CValue::L2CValue(aLStack232,0.0);
    lib::L2CValue::L2CValue(aLStack248,1.0);
    lib::L2CValue::L2CValue(aLStack264,true);
    lib::L2CValue::L2CValue(aLStack280,false);
    lib::L2CValue::L2CValue(aLStack296,0.0);
    lib::L2CValue::L2CValue(aLStack312,false);
    lib::L2CValue::L2CValue(aLStack328,true);
    lib::L2CValue::L2CValue(aLStack344,true);
    iVar6 = lib::L2CValue::as_integer(aLStack152);
    HVar11 = lib::L2CValue::as_hash(aLStack216);
    fVar12 = (float)lib::L2CValue::as_number(aLStack232);
    fVar13 = (float)lib::L2CValue::as_number(aLStack248);
    bVar1 = lib::L2CValue::as_bool(aLStack264);
    bVar2 = lib::L2CValue::as_bool(aLStack280);
    fVar14 = (float)lib::L2CValue::as_number(aLStack296);
    bVar3 = lib::L2CValue::as_bool(aLStack312);
    bVar4 = lib::L2CValue::as_bool(aLStack328);
    bVar5 = lib::L2CValue::as_bool(aLStack344);
    app::lua_bind::MotionModule__add_motion_partial_impl
              (this->moduleAccessor,iVar6,HVar11,fVar12,fVar13,(bool)(bVar1 & 1),(bool)(bVar2 & 1),
               fVar14,(bool)(bVar3 & 1),(bool)(bVar4 & 1),(bool)(bVar5 & 1));
    lib::L2CValue::_L2CValue(aLStack344);
    lib::L2CValue::_L2CValue(aLStack328);
    lib::L2CValue::_L2CValue(aLStack312);
    lib::L2CValue::_L2CValue(aLStack296);
    lib::L2CValue::_L2CValue(aLStack280);
    lib::L2CValue::_L2CValue(aLStack264);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack232);
    lib::L2CValue::_L2CValue(aLStack216);
    this_00 = aLStack152;
  }
  else {
    lib::L2CValue::L2CValue(aLStack152,0);
    lib::L2CValue::L2CValue(aLStack216,_FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_APPEAL_HI_KIND);
    iVar6 = lib::L2CValue::as_integer(aLStack152);
    iVar7 = lib::L2CValue::as_integer(aLStack216);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar6,iVar7);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::L2CValue(aLStack232,_FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_APPEAL_HI_KIND_DEBUG);
    iVar6 = lib::L2CValue::as_integer(aLStack232);
    iVar6 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar6);
    lib::L2CValue::L2CValue(aLStack216,iVar6);
    lib::L2CValue::L2CValue(aLStack152,-1);
    uVar10 = lib::L2CValue::operator__(aLStack216,aLStack152);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue(aLStack216);
    lib::L2CValue::_L2CValue(aLStack232);
    if ((uVar10 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack152,_FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_APPEAL_HI_KIND_DEBUG);
      iVar6 = lib::L2CValue::as_integer(aLStack152);
      iVar6 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar6);
      lib::L2CValue::L2CValue(aLStack216,iVar6);
      lib::L2CValue::_L2CValue(aLStack152);
      lib::L2CValue::L2CValue(aLStack152,1);
      lib::L2CValue::operator__(aLStack152,aLStack216);
      lib::L2CValue::_L2CValue(aLStack152);
      lib::L2CValue::L2CValue(aLStack152,_FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_APPEAL_HI_KIND);
      iVar6 = lib::L2CValue::as_integer(aLStack232);
      iVar7 = lib::L2CValue::as_integer(aLStack152);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar6,iVar7);
      lib::L2CValue::_L2CValue(aLStack152);
      lib::L2CValue::_L2CValue(aLStack232);
      this_00 = aLStack216;
    }
    else {
      lib::L2CValue::L2CValue(aLStack216,0x77a08c3fc);
      lib::L2CValue::L2CValue(aLStack232,100);
      HVar11 = lib::L2CValue::as_hash(aLStack216);
      iVar6 = lib::L2CValue::as_integer(aLStack232);
      uVar8 = app::sv_math::rand(HVar11,iVar6);
      lib::L2CValue::L2CValue(aLStack152,uVar8);
      lib::L2CValue::operator_(aLStack184,aLStack152);
      lib::L2CValue::_L2CValue(aLStack152);
      lib::L2CValue::_L2CValue(aLStack232);
      lib::L2CValue::_L2CValue(aLStack216);
      lib::L2CValue::L2CValue(aLStack152,_FIGHTER_PACMAN_APPEAL_HI_NUM);
      lib::L2CValue::operator_(aLStack184,aLStack152);
      lib::L2CValue::_L2CValue(aLStack152);
      lib::L2CValue::operator_(aLStack184,aLStack216);
      lib::L2CValue::_L2CValue(aLStack216);
      lib::L2CValue::L2CValue(aLStack152,1);
      lib::L2CValue::operator__(aLStack152,aLStack184);
      lib::L2CValue::_L2CValue(aLStack152);
      lib::L2CValue::operator_(aLStack184,aLStack216);
      lib::L2CValue::_L2CValue(aLStack216);
      lib::L2CValue::L2CValue(aLStack152,_FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_APPEAL_HI_KIND);
      iVar6 = lib::L2CValue::as_integer(aLStack184);
      iVar7 = lib::L2CValue::as_integer(aLStack152);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar6,iVar7);
      this_00 = aLStack152;
    }
  }
  lib::L2CValue::_L2CValue(this_00);
LAB_7100018404:
  lib::L2CValue::L2CValue(aLStack152,0x5b068b289);
  lib::L2CValue::L2CValue(aLStack216,_MESH_VISIBILITY_TRUE);
  lVar9 = lib::L2CValue::as_integer(aLStack152);
  iVar6 = lib::L2CValue::as_integer(aLStack216);
  app::lua_bind::VisibilityModule__set_mesh_visibility_int64_impl
            (this->moduleAccessor,lVar9,iVar6,false);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::L2CValue(aLStack152,Appeal_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x68);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack200);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  return;
}

