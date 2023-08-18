
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponInklingRoller::status::End_main(L2CWeaponInklingRoller *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  LinkAttribute LVar4;
  Hash40 HVar5;
  void *pvVar6;
  BattleObjectModuleAccessor *pBVar7;
  ulong uVar8;
  Hash40 HVar9;
  float fVar10;
  float fVar11;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0x300fc33b1);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar5 = lib::L2CValue::as_hash(aLStack80);
  fVar10 = (float)lib::L2CValue::as_number(aLStack96);
  fVar11 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar5,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_LINK_NO_CONSTRAINT);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  uVar3 = app::lua_bind::LinkModule__get_parent_id_impl(this->moduleAccessor,iVar2,true);
  lib::L2CValue::L2CValue(aLStack96,uVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar3);
  if (pvVar6 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,pvVar6);
  }
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KIND_INKLING);
  uVar3 = lib::L2CValue::as_integer(aLStack160);
  iVar2 = app::FighterSpecializer_Inkling::get_ink_work_id(uVar3);
  lib::L2CValue::L2CValue(aLStack144,iVar2);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(pBVar7,iVar2);
  lib::L2CValue::L2CValue(aLStack128,fVar10);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  uVar8 = lib::L2CValue::operator__(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0x82aef2fed);
    lib::L2CValue::L2CValue(aLStack128,0x11d78c9960);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    HVar9 = lib::L2CValue::as_hash(aLStack128);
    app::lua_bind::VisibilityModule__set_impl(this->moduleAccessor,HVar5,HVar9);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_LINK_NO_CONSTRAINT);
  lib::L2CValue::L2CValue(aLStack128,LINK_ATTRIBUTE_REFERENCE_PARENT_STOP);
  lib::L2CValue::L2CValue(aLStack144,false);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  LVar4 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::LinkModule__set_attribute_impl(this->moduleAccessor,iVar2,LVar4,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,End_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

