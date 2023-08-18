
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponTantanSpiral::status::DragonBeam_exec(L2CWeaponTantanSpiral *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  Weapon *pWVar5;
  BattleObjectModuleAccessor *pBVar6;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue
            (aLStack112,_WEAPON_TANTAN_SPIRALLEFT_STATUS_DRAGON_WORK_ID_FLAG_INIT_FOUNDER_SCALING);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue
              (aLStack112,_WEAPON_TANTAN_SPIRALLEFT_STATUS_DRAGON_WORK_ID_FLAG_INIT_PHYSICS_TIP_POS)
    ;
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    this_00 = &this->globalTable;
    if ((uVar3 & 1) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
      pWVar5 = (Weapon *)lib::L2CValue::as_pointer(pLVar4);
      app::WeaponSpecializer_TantanSpiralleft::init_physics_tip_pos(pWVar5);
      lib::L2CValue::L2CValue
                (aLStack80,_WEAPON_TANTAN_SPIRALLEFT_STATUS_DRAGON_WORK_ID_FLAG_INIT_PHYSICS_TIP_POS
                );
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
    app::WeaponSpecializer_TantanSpiralleft::update_dragon_beam_nest_tip_pos(pBVar6);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
    app::WeaponSpecializer_TantanSpiralleft::update_dragon_beam_2nd_pos(pBVar6);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
    app::WeaponSpecializer_TantanSpiralleft::update_dragon_beam_2nd_end_pos(pBVar6);
    lib::L2CValue::L2CValue
              (aLStack80,
               _WEAPON_TANTAN_SPIRALLEFT_STATUS_DRAGON_WORK_ID_FLAG_UPDATE_DRAGON_NEST_TIP_POS);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

