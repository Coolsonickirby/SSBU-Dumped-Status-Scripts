
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponLucarioLucariom::status::FinalStart_end
          (L2CWeaponLucarioLucariom *this,L2CValue *return_value)

{
  int iVar1;
  float fVar2;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_LUCARIO_LUCARIOM_INSTANCE_WORK_ID_FLOAT_FINAL_TARGET_LR)
  ;
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  fVar2 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack48,fVar2);
  fVar2 = (float)lib::L2CValue::as_number(aLStack48);
  app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar2);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

