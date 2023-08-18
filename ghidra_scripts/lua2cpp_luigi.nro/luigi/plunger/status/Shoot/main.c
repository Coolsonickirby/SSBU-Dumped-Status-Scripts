
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponLuigiPlunger::status::Shoot_main(L2CWeaponLuigiPlunger *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  Hash40 HVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_LUIGI_PLUNGER_INSTANCE_WORK_ID_FLAG_AIR_LASSO);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_ANIMCMD_GAME);
    lib::L2CValue::L2CValue(aLStack80,0xd89aaa9ef);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    HVar4 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::MotionAnimcmdModule__call_script_single_impl(this->moduleAccessor,iVar3,HVar4,-1)
    ;
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack80,0x164f842287);
  HVar4 = lib::L2CValue::as_hash(aLStack80);
  iVar3 = app::lua_bind::SoundModule__play_se_impl
                    (this->moduleAccessor,HVar4,true,false,false,false,0);
  lib::L2CValue::L2CValue(aLStack64,iVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,Shoot_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

