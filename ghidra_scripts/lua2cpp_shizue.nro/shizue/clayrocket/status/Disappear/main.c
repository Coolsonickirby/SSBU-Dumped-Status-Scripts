
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponShizueClayrocket::status::Disappear_main
          (L2CWeaponShizueClayrocket *this,L2CValue *return_value)

{
  byte bVar1;
  HitStatus HVar2;
  int iVar3;
  Hash40 HVar4;
  L2CValue *pLVar5;
  code *pcVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0x928166ab1);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar4 = lib::L2CValue::as_hash(aLStack80);
  fVar8 = (float)lib::L2CValue::as_number(aLStack96);
  fVar9 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar4,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,false);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,HIT_STATUS_OFF);
  HVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar2,0);
  lib::L2CValue::_L2CValue(aLStack80);
  app::LinkEvent::new_l2c_table();
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x105a79305b);
  lib::L2CValue::L2CValue(aLStack80,0x2ae60fe5c8);
  lib::L2CValue::operator_(pLVar5,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_LINK_NO_CONSTRAINT);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x11f63699bf);
  pcVar6 = (code *)lib::L2CValue::as_pointer(pLVar5);
  plVar7 = (long *)(*pcVar6)();
  app::lua_bind::LinkEvent__load_from_l2c_table_impl((LinkEvent *)plVar7,aLStack96);
  app::lua_bind::LinkModule__send_event_parents_struct_impl
            (this->moduleAccessor,iVar3,(LinkEvent *)plVar7);
  app::lua_bind::LinkEvent__store_l2c_table_impl((LinkEvent *)plVar7);
  lib::L2CValue::L2CValue(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  (**(code **)(*plVar7 + 8))(plVar7);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack80,Disappear_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

