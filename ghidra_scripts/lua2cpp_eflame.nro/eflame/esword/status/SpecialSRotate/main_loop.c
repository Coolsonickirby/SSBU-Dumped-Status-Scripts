
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponEflameEsword::status::SpecialSRotate_main_loop
          (L2CWeaponEflameEsword *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  float fVar8;
  undefined8 uVar9;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue
            (aLStack80,_WEAPON_EFLAME_ESWORD_STATUS_SPECIAL_S_FLAG_GENERATED_LAST_GROUND_EFFECT);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack64);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    fVar8 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack192,fVar8);
    lib::L2CValue::L2CValue(aLStack80,0xcedec4cee);
    lib::L2CValue::L2CValue(aLStack96,0x18fde4d12e);
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    uVar5 = lib::L2CValue::as_integer(aLStack96);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack64,fVar8);
    uVar4 = lib::L2CValue::operator_(aLStack64,aLStack192);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0x17ce9b6a31);
      lib::L2CValue::L2CValue(aLStack128,0x1552a6713f);
      FUN_7100021c10(aLStack96,this,aLStack112,aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      pLVar6 = aLStack112;
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0x184bc5255d);
      lib::L2CValue::L2CValue(aLStack112,0x1525a141a9);
      FUN_7100021c10(aLStack192,this,aLStack96,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack192);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack64,
                   _WEAPON_EFLAME_ESWORD_STATUS_SPECIAL_S_FLAG_GENERATED_LAST_GROUND_EFFECT);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack64);
      }
      pLVar6 = aLStack192;
    }
    lib::L2CValue::_L2CValue(pLVar6);
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((bVar2 & 1U) == 0) {
    FUN_710001f640(this);
    FUN_7100020080(aLStack144,this);
    lib::L2CValue::L2CValue(aLStack208,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
    uVar9 = app::sv_kinetic_energy::get_speed(this->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack192,(float)uVar9);
    lib::L2CValue::L2CValue(aLStack176,(float)((ulong)uVar9 >> 0x20));
    lib::L2CValue::L2CValue(aLStack64,aLStack192);
    lib::L2CValue::L2CValue(aLStack80,aLStack176);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack208,aLStack160);
    lua2cpp::L2CFighterBase::Vector2__length(this,(L2CValue)0x30);
    lib::L2CValue::operator_(aLStack144,aLStack80);
    lib::L2CValue::operator_(aLStack160,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar6);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar7);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_EFLAME_ESWORD_INSTANCE_WORK_ID_FLAG_TAKE_FROM_POCKET);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack192,_WEAPON_EFLAME_ESWORD_STATUS_KIND_SPECIAL_S_BACK);
      lib::L2CValue::L2CValue(aLStack64,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0xc0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack192,_WEAPON_EFLAME_ESWORD_STATUS_KIND_SPECIAL_S_VANISH);
      lib::L2CValue::L2CValue(aLStack64,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0xc0);
    }
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  return;
}

