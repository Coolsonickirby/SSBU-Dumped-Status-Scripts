
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponLucarioLucariom::status::FinalStart_main_loop
          (L2CWeaponLucarioLucariom *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  Hash40 HVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_LINK_NO_CONSTRAINT);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    iVar2 = app::lua_bind::LinkModule__get_parent_situation_kind_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack64,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
    uVar3 = lib::L2CValue::operator__(aLStack64,pLVar4);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,aLStack64);
      FUN_710002be90(aLStack80,this,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack112,aLStack64);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack112);
      HVar5 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::MotionModule__change_motion_inherit_frame_impl
                (this->moduleAccessor,HVar5,-1.0,1.0,0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

