
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMarioHugeflame::status::Regular_main_loop
          (L2CWeaponMarioHugeflame *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  BattleObjectModuleAccessor *pBVar10;
  Hash40 HVar11;
  float fVar12;
  uint uVar13;
  long lVar14;
  undefined8 uVar15;
  float fVar16;
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  ulong local_90;
  ulong uStack136;
  
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_MARIO_HUGE_FLAME_INSTANCE_WORK_ID_INT_LIFE);
  iVar1 = lib::L2CValue::as_integer(aLStack160);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar1);
  lib::L2CValue::L2CValue(aLStack320,0);
  uVar2 = lib::L2CValue::operator__((L2CValue *)&local_90,aLStack320);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,_WEAPON_MARIO_HUGE_FLAME_INSTANCE_WORK_ID_FLOAT_EFFECT_POS1_X);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack320,fVar12);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
    lib::L2CValue::operator_(pLVar3,aLStack320);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,_WEAPON_MARIO_HUGE_FLAME_INSTANCE_WORK_ID_FLOAT_EFFECT_POS1_Y);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack320,fVar12);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar3,aLStack320);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CValue::operator_(pLVar3,aLStack320);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    fVar12 = 0.0;
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x10,(L2CValue)0x0,(L2CValue)0xf0);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x18cdc1683);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x162d277af);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    lib::L2CValue::L2CValue(aLStack336,0x5885fee9f);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
    pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
    HVar11 = lib::L2CValue::as_hash(aLStack336);
    uVar2 = lib::L2CValue::as_number(pLVar7);
    lVar14 = lib::L2CValue::as_number(pLVar8);
    uVar13 = lib::L2CValue::as_number(pLVar9);
    local_90 = uVar2 & 0xffffffff | lVar14 << 0x20;
    uStack136 = (ulong)uVar13;
    uVar15 = app::WeaponSpecializer_MarioHugeFlame::request_effect
                       (pBVar10,HVar11,(Vector3f *)&local_90);
    lib::L2CValue::L2CValue(aLStack320,(float)uVar15);
    lib::L2CValue::L2CValue(aLStack304,(float)((ulong)uVar15 >> 0x20));
    fVar16 = 0.0;
    lib::L2CValue::L2CValue(aLStack288,fVar12);
    lib::L2CValue::operator_(pLVar3,aLStack320);
    lib::L2CValue::operator_(pLVar4,aLStack304);
    lib::L2CValue::operator_(pLVar5,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack336);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x18cdc1683);
    lib::L2CValue::L2CValue
              (aLStack320,_WEAPON_MARIO_HUGE_FLAME_INSTANCE_WORK_ID_FLOAT_EFFECT_POS1_X);
    fVar12 = (float)lib::L2CValue::as_number(pLVar3);
    iVar1 = lib::L2CValue::as_integer(aLStack320);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar12,iVar1);
    lib::L2CValue::_L2CValue(aLStack320);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
    lib::L2CValue::L2CValue
              (aLStack320,_WEAPON_MARIO_HUGE_FLAME_INSTANCE_WORK_ID_FLOAT_EFFECT_POS1_Y);
    fVar12 = (float)lib::L2CValue::as_number(pLVar3);
    iVar1 = lib::L2CValue::as_integer(aLStack320);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar12,iVar1);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,_WEAPON_MARIO_HUGE_FLAME_INSTANCE_WORK_ID_FLOAT_EFFECT_POS2_X);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack320,fVar12);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
    lib::L2CValue::operator_(pLVar3,aLStack320);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,_WEAPON_MARIO_HUGE_FLAME_INSTANCE_WORK_ID_FLOAT_EFFECT_POS2_Y);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack320,fVar12);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar3,aLStack320);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x18cdc1683);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x162d277af);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    lib::L2CValue::L2CValue(aLStack336,0x51156bf25);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
    pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
    HVar11 = lib::L2CValue::as_hash(aLStack336);
    uVar2 = lib::L2CValue::as_number(pLVar7);
    lVar14 = lib::L2CValue::as_number(pLVar8);
    uVar13 = lib::L2CValue::as_number(pLVar9);
    local_90 = uVar2 & 0xffffffff | lVar14 << 0x20;
    uStack136 = (ulong)uVar13;
    uVar15 = app::WeaponSpecializer_MarioHugeFlame::request_effect
                       (pBVar10,HVar11,(Vector3f *)&local_90);
    lib::L2CValue::L2CValue(aLStack320,(float)uVar15);
    lib::L2CValue::L2CValue(aLStack304,(float)((ulong)uVar15 >> 0x20));
    lib::L2CValue::L2CValue(aLStack288,fVar16);
    lib::L2CValue::operator_(pLVar3,aLStack320);
    lib::L2CValue::operator_(pLVar4,aLStack304);
    lib::L2CValue::operator_(pLVar5,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack336);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x18cdc1683);
    lib::L2CValue::L2CValue
              (aLStack320,_WEAPON_MARIO_HUGE_FLAME_INSTANCE_WORK_ID_FLOAT_EFFECT_POS2_X);
    fVar12 = (float)lib::L2CValue::as_number(pLVar3);
    iVar1 = lib::L2CValue::as_integer(aLStack320);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar12,iVar1);
    lib::L2CValue::_L2CValue(aLStack320);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
    lib::L2CValue::L2CValue
              (aLStack320,_WEAPON_MARIO_HUGE_FLAME_INSTANCE_WORK_ID_FLOAT_EFFECT_POS2_Y);
    fVar12 = (float)lib::L2CValue::as_number(pLVar3);
    iVar1 = lib::L2CValue::as_integer(aLStack320);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar12,iVar1);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_90);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

