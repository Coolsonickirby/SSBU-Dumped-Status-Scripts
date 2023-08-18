
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGekkouga::status::FinalEnd_init(L2CFighterGekkouga *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  BattleObjectModuleAccessor *pBVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 in_register_00005008;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  iVar1 = app::lua_bind::StatusModule__status_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack176,iVar1);
  lib::L2CValue::L2CValue(aLStack256,FIGHTER_STATUS_KIND_FINAL);
  uVar2 = lib::L2CValue::operator__(aLStack176,aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_GEKKOUGA_STATUS_KIND_FINAL_END);
    lib::L2CValue::operator__(aLStack176,aLStack256);
    pLVar3 = aLStack256;
  }
  else {
    uVar6 = app::FighterUtil::renderer_get_clear_color();
    lib::L2CValue::L2CValue(aLStack256,(float)uVar6);
    lib::L2CValue::L2CValue(aLStack240,(float)((ulong)uVar6 >> 0x20));
    lib::L2CValue::L2CValue(aLStack224,(float)in_register_00005008);
    lib::L2CValue::L2CValue(aLStack208,(float)((ulong)in_register_00005008 >> 0x20));
    lib::L2CValue::L2CValue(aLStack112,aLStack256);
    lib::L2CValue::L2CValue(aLStack128,aLStack240);
    lib::L2CValue::L2CValue(aLStack144,aLStack224);
    lib::L2CValue::L2CValue(aLStack160,aLStack208);
    lua2cpp::L2CFighterBase::Vector4__create
              (this,(L2CValue)0x90,(L2CValue)0x80,(L2CValue)0x70,(L2CValue)0x60);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack256);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_GEKKOUGA_INSTACNE_WORK_ID_FLOAT_FINAL_ORIGINAL_BG_COLOR_R);
    fVar5 = (float)lib::L2CValue::as_number(pLVar3);
    iVar1 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar1);
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_GEKKOUGA_INSTACNE_WORK_ID_FLOAT_FINAL_ORIGINAL_BG_COLOR_G);
    fVar5 = (float)lib::L2CValue::as_number(pLVar3);
    iVar1 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar1);
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x162d277af);
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_GEKKOUGA_INSTACNE_WORK_ID_FLOAT_FINAL_ORIGINAL_BG_COLOR_B);
    fVar5 = (float)lib::L2CValue::as_number(pLVar3);
    iVar1 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar1);
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x11c630b12);
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_GEKKOUGA_INSTACNE_WORK_ID_FLOAT_FINAL_ORIGINAL_BG_COLOR_A);
    fVar5 = (float)lib::L2CValue::as_number(pLVar3);
    iVar1 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar1);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    this_00 = &this->globalTable;
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    iVar1 = lib::L2CValue::as_integer(aLStack112);
    pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
    app::KineticUtility::clear_unable_energy(iVar1,pBVar4);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    iVar1 = lib::L2CValue::as_integer(aLStack112);
    pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
    app::KineticUtility::clear_unable_energy(iVar1,pBVar4);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    iVar1 = lib::L2CValue::as_integer(aLStack112);
    pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
    app::KineticUtility::clear_unable_energy(iVar1,pBVar4);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_DAMAGE);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    iVar1 = lib::L2CValue::as_integer(aLStack112);
    pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
    app::KineticUtility::clear_unable_energy(iVar1,pBVar4);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    iVar1 = lib::L2CValue::as_integer(aLStack112);
    pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
    app::KineticUtility::clear_unable_energy(iVar1,pBVar4);
    lib::L2CValue::_L2CValue(aLStack112);
    app::lua_bind::FighterManager__disable_ko_camera_impl(LUA_SCRIPT_LINE_STATUS_SYSTEM);
    pLVar3 = aLStack192;
  }
  lib::L2CValue::_L2CValue(pLVar3);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack176);
  return;
}

