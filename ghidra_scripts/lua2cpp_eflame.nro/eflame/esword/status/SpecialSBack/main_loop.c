
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponEflameEsword::status::SpecialSBack_main_loop
          (L2CWeaponEflameEsword *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  BattleObjectModuleAccessor *pBVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  L2CValue *pLVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
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
  L2CValue aLStack144 [16];
  ulong local_80;
  undefined8 uStack120;
  ulong local_70;
  undefined8 uStack104;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_WEAPON_EFLAME_ESWORD_STATUS_SPECIAL_S_FLAG_CATCHED)
  ;
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack192);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    return;
  }
  FUN_710001ad00(aLStack144,this);
  uVar16 = app::lua_bind::PostureModule__pos_2d_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,(float)uVar16);
  lib::L2CValue::L2CValue(aLStack176,(float)((ulong)uVar16 >> 0x20));
  lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack192);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,aLStack176);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::operator_(aLStack144,aLStack160);
  lua2cpp::L2CFighterBase::Vector2__length(this,(L2CValue)0x20);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0xcedec4cee);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0xfd2e258a8);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack240,fVar11);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  uVar4 = lib::L2CValue::operator_(aLStack240,aLStack208);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_WEAPON_EFLAME_ESWORD_STATUS_KIND_SPECIAL_S_VANISH);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_7100020fc0;
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0xcedec4cee);
  lib::L2CValue::L2CValue(aLStack256,0xc0a924dbc);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  uVar5 = lib::L2CValue::as_integer(aLStack256);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar3);
  uVar4 = lib::L2CValue::operator__((L2CValue *)&local_70,pLVar6);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_WEAPON_EFLAME_ESWORD_STATUS_KIND_SPECIAL_S_VANISH);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_7100020fc0;
  }
  lib::L2CValue::L2CValue(aLStack272,0xcedec4cee);
  lib::L2CValue::L2CValue(aLStack288,0x1342cbc427);
  uVar4 = lib::L2CValue::as_integer(aLStack272);
  uVar5 = lib::L2CValue::as_integer(aLStack288);
  fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar11);
  fVar11 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack304,fVar11);
  lib::L2CValue::operator_((L2CValue *)&local_80,aLStack304);
  FUN_7100021330(aLStack320,this);
  lib::L2CValue::operator_((L2CValue *)&local_70,aLStack320);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  uVar4 = lib::L2CValue::operator_(aLStack208,aLStack256);
  if ((uVar4 & 1) == 0) {
LAB_7100020a4c:
    lib::L2CValue::L2CValue((L2CValue *)&local_70,1.0);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack288,1.0);
    fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
    fVar13 = (float)lib::L2CValue::as_number((L2CValue *)&local_80);
    fVar14 = (float)lib::L2CValue::as_number(aLStack272);
    fVar15 = (float)lib::L2CValue::as_number(aLStack288);
    app::sv_debug_draw::set_draw_color(fVar11,fVar13,fVar14,fVar15);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack272,1);
    uVar4 = lib::L2CValue::as_number(pLVar6);
    uVar12 = lib::L2CValue::as_number(pLVar8);
    local_70 = uVar4 & 0xffffffff | (ulong)uVar12 << 0x20;
    uStack104 = 0;
    uVar4 = lib::L2CValue::as_number(pLVar9);
    uVar12 = lib::L2CValue::as_number(pLVar10);
    local_80 = uVar4 & 0xffffffff | (ulong)uVar12 << 0x20;
    uStack120 = 0;
    iVar3 = lib::L2CValue::as_integer(aLStack272);
    app::sv_debug_draw::draw_line((Vector2f *)&local_70,(Vector2f *)&local_80,iVar3);
    lib::L2CValue::_L2CValue(aLStack272);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack288,0xcedec4cee);
    lib::L2CValue::L2CValue(aLStack304,0x1342cbc427);
    uVar4 = lib::L2CValue::as_integer(aLStack288);
    uVar5 = lib::L2CValue::as_integer(aLStack304);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack272,fVar11);
    fVar11 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack320,fVar11);
    lib::L2CValue::operator_(aLStack272,aLStack320);
    lib::L2CValue::L2CValue(aLStack336,1);
    uVar4 = lib::L2CValue::as_number(pLVar6);
    uVar12 = lib::L2CValue::as_number(pLVar8);
    local_70 = uVar4 & 0xffffffff | (ulong)uVar12 << 0x20;
    uStack104 = 0;
    fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_80);
    iVar3 = lib::L2CValue::as_integer(aLStack336);
    app::sv_debug_draw::draw_circle((Vector2f *)&local_70,fVar11,iVar3);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
    FUN_7100021330(&local_80,this);
    lib::L2CValue::L2CValue(aLStack272,1);
    uVar4 = lib::L2CValue::as_number(pLVar6);
    uVar12 = lib::L2CValue::as_number(pLVar8);
    local_70 = uVar4 & 0xffffffff | (ulong)uVar12 << 0x20;
    uStack104 = 0;
    fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_80);
    iVar3 = lib::L2CValue::as_integer(aLStack272);
    app::sv_debug_draw::draw_circle((Vector2f *)&local_70,fVar11,iVar3);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    FUN_710001ad00(aLStack272,this);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
    lib::L2CValue::L2CValue(aLStack288,1.0);
    lib::L2CValue::L2CValue(aLStack304,1.0);
    fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
    fVar13 = (float)lib::L2CValue::as_number((L2CValue *)&local_80);
    fVar14 = (float)lib::L2CValue::as_number(aLStack288);
    fVar15 = (float)lib::L2CValue::as_number(aLStack304);
    app::sv_debug_draw::set_draw_color(fVar11,fVar13,fVar14,fVar15);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,1);
    lib::L2CValue::L2CValue(aLStack288,1);
    uVar4 = lib::L2CValue::as_number(pLVar6);
    uVar12 = lib::L2CValue::as_number(pLVar8);
    local_70 = uVar4 & 0xffffffff | (ulong)uVar12 << 0x20;
    uStack104 = 0;
    fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_80);
    iVar3 = lib::L2CValue::as_integer(aLStack288);
    app::sv_debug_draw::draw_circle((Vector2f *)&local_70,fVar11,iVar3);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x18cdc1683);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack272,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack288,1);
    uVar4 = lib::L2CValue::as_number(pLVar6);
    uVar12 = lib::L2CValue::as_number(pLVar8);
    local_70 = uVar4 & 0xffffffff | (ulong)uVar12 << 0x20;
    uStack104 = 0;
    uVar4 = lib::L2CValue::as_number(pLVar9);
    uVar12 = lib::L2CValue::as_number(pLVar10);
    local_80 = uVar4 & 0xffffffff | (ulong)uVar12 << 0x20;
    uStack120 = 0;
    iVar3 = lib::L2CValue::as_integer(aLStack288);
    app::sv_debug_draw::draw_line((Vector2f *)&local_70,(Vector2f *)&local_80,iVar3);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
    bVar1 = app::WeaponSpecializer_EFlameEsword::request_catch(pBVar7);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_80);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      goto LAB_7100020a4c;
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_WEAPON_EFLAME_ESWORD_STATUS_SPECIAL_S_FLAG_CATCHED);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
    uVar4 = lib::L2CValue::as_number(pLVar6);
    uVar12 = lib::L2CValue::as_number(pLVar8);
    local_70 = uVar4 & 0xffffffff | (ulong)uVar12 << 0x20;
    uStack104 = 0;
    app::lua_bind::PostureModule__set_pos_2d_impl(this->moduleAccessor,(Vector2f *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
    app::sv_kinetic_energy::unable(this->luaStateAgent);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_70);
    app::lua_bind::VisibilityModule__set_model_visible_impl(this->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_70);
    app::lua_bind::EffectModule__set_sync_visibility_impl(this->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  }
  lib::L2CValue::_L2CValue(aLStack256);
LAB_7100020fc0:
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

