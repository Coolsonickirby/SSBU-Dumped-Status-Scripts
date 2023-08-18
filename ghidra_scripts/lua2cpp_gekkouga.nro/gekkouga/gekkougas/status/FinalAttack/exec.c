
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CWeaponGekkougaGekkougas::status::FinalAttack_exec(long this)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  BattleObjectModuleAccessor *pBVar5;
  L2CValue *return_value;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 200),5);
  pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
  app::WeaponSpecializer_GekkougaGekkougaS::update_moon_position(pBVar5);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_GEKKOUGA_GEKKOUGAS_INSTANCE_WORK_ID_INT_BLACKOUT_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__inc_int_impl(*(BattleObjectModuleAccessor **)(this + 0x40),iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue
            (aLStack96,_WEAPON_GEKKOUGA_GEKKOUGAS_INSTANCE_WORK_ID_FLAG_TARGET_NOREAC_OFF);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(this + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 200),5);
    lib::L2CValue::L2CValue(aLStack80,false);
    pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
    bVar1 = lib::L2CValue::as_bool(aLStack80);
    app::WeaponSpecializer_GekkougaGekkougaS::set_link_final_end(pBVar5,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue
              (aLStack80,_WEAPON_GEKKOUGA_GEKKOUGAS_INSTANCE_WORK_ID_FLAG_TARGET_NOREAC_OFF);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(this + 0x40),iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(return_value,0);
  return;
}

