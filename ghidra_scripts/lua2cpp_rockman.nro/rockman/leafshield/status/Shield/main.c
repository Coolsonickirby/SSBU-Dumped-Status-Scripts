
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRockmanLeafshield::status::Shield_main
          (L2CWeaponRockmanLeafshield *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  Hash40 HVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0x6de7e8782);
  lib::L2CValue::L2CValue(aLStack128,0xd0910d60e);
  lVar3 = lib::L2CValue::as_integer(aLStack112);
  lVar4 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar3,lVar4);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x64777d638);
  lib::L2CValue::L2CValue(aLStack128,0xd879fd1ed);
  lVar3 = lib::L2CValue::as_integer(aLStack112);
  lVar4 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar3,lVar4);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x63070e6ae);
  lib::L2CValue::L2CValue(aLStack128,0xd4b35d173);
  lVar3 = lib::L2CValue::as_integer(aLStack112);
  lVar4 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar3,lVar4);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x6ae14730d);
  lib::L2CValue::L2CValue(aLStack128,0xd41f0d86a);
  lVar3 = lib::L2CValue::as_integer(aLStack112);
  lVar4 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar3,lVar4);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x6de7e8782);
  lib::L2CValue::L2CValue(aLStack128,_MESH_VISIBILITY_NONE);
  lVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::VisibilityModule__set_mesh_visibility_int64_impl
            (this->moduleAccessor,lVar3,iVar2,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x64777d638);
  lib::L2CValue::L2CValue(aLStack128,_MESH_VISIBILITY_NONE);
  lVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::VisibilityModule__set_mesh_visibility_int64_impl
            (this->moduleAccessor,lVar3,iVar2,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x63070e6ae);
  lib::L2CValue::L2CValue(aLStack128,_MESH_VISIBILITY_NONE);
  lVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::VisibilityModule__set_mesh_visibility_int64_impl
            (this->moduleAccessor,lVar3,iVar2,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x6ae14730d);
  lib::L2CValue::L2CValue(aLStack128,_MESH_VISIBILITY_NONE);
  lVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::VisibilityModule__set_mesh_visibility_int64_impl
            (this->moduleAccessor,lVar3,iVar2,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,fVar7);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,0xd5ab2cdc4);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,1.0);
    lib::L2CValue::L2CValue(aLStack176,false);
    HVar6 = lib::L2CValue::as_hash(aLStack112);
    fVar7 = (float)lib::L2CValue::as_number(aLStack144);
    fVar8 = (float)lib::L2CValue::as_number(aLStack160);
    bVar1 = lib::L2CValue::as_bool(aLStack176);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,0x59f79558f);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,1.0);
    lib::L2CValue::L2CValue(aLStack176,false);
    HVar6 = lib::L2CValue::as_hash(aLStack112);
    fVar7 = (float)lib::L2CValue::as_number(aLStack144);
    fVar8 = (float)lib::L2CValue::as_number(aLStack160);
    bVar1 = lib::L2CValue::as_bool(aLStack176);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::operator_(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_ROCKMAN_LEAFSHIELD_INSTANCE_WORK_ID_FLOAT_INIT_LR);
  fVar7 = (float)lib::L2CValue::as_number(aLStack144);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar2);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack112,Shield_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

