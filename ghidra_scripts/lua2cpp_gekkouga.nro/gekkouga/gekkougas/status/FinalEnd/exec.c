
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponGekkougaGekkougas::status::FinalEnd_exec
          (L2CWeaponGekkougaGekkougas *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *this_00;
  BattleObjectModuleAccessor *pBVar2;
  L2CValue aLStack48 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  pBVar2 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_00);
  app::WeaponSpecializer_GekkougaGekkougaS::raise_moon_position(pBVar2);
  lib::L2CValue::L2CValue(aLStack48,_WEAPON_GEKKOUGA_GEKKOUGAS_INSTANCE_WORK_ID_INT_BLACKOUT_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

