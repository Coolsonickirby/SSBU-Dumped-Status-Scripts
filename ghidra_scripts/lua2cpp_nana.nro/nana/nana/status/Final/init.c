
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterNana::status::Final_init(L2CFighterNana *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  BattleObjectModuleAccessor *pBVar7;
  L2CTable *this_00;
  L2CValue *pLVar8;
  L2CValue *this_01;
  float *pfVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  L2CValue aLStack424 [16];
  L2CValue aLStack408 [16];
  L2CValue aLStack392 [16];
  L2CValue aLStack376 [16];
  L2CValue aLStack360 [16];
  L2CValue aLStack344 [16];
  L2CValue aLStack328 [16];
  L2CValue aLStack312 [16];
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [24];
  
  lib::L2CValue::L2CValue(aLStack248,_FIGHTER_POPO_INSTANCE_WORK_ID_INT_PARTNER_OBJECT_ID);
  iVar3 = lib::L2CValue::as_integer(aLStack248);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack136,iVar3);
  lib::L2CValue::_L2CValue(aLStack248);
  lib::L2CValue::L2CValue(aLStack248,0x50000000);
  uVar5 = lib::L2CValue::operator__(aLStack136,aLStack248);
  lib::L2CValue::_L2CValue(aLStack248);
  if ((uVar5 & 1) == 0) {
    uVar4 = lib::L2CValue::as_integer(aLStack136);
    bVar1 = app::sv_battle_object::is_active(uVar4);
    lib::L2CValue::L2CValue(aLStack312,(bool)(bVar1 & 1));
    lib::L2CValue::operator_(aLStack312);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack248);
    lib::L2CValue::_L2CValue(aLStack248);
    lib::L2CValue::_L2CValue(aLStack312);
    if ((bVar2 & 1U) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
      bVar1 = app::FighterSpecializer_Popo::is_enable_couple_tech_for_lua(pBVar7);
      lib::L2CValue::L2CValue(aLStack248,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack248);
      lib::L2CValue::_L2CValue(aLStack248);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack248,_FIGHTER_POPO_STATUS_FINAL_FLAG_COUPLE);
        iVar3 = lib::L2CValue::as_integer(aLStack248);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
        pLVar6 = aLStack248;
      }
      else {
        lib::L2CValue::L2CValue(aLStack168,0.0);
        fVar11 = 0.0;
        lib::L2CValue::L2CValue(aLStack184,0.0);
        lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x58,(L2CValue)0x48);
        lib::L2CValue::_L2CValue(aLStack184);
        lib::L2CValue::_L2CValue(aLStack168);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
        pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
        uVar13 = app::FighterSpecializer_Popo::get_partner_position(pBVar7);
        lib::L2CValue::L2CValue(aLStack248,(float)uVar13);
        lib::L2CValue::L2CValue(aLStack232,(float)((ulong)uVar13 >> 0x20));
        lib::L2CValue::L2CValue(aLStack216,fVar11);
        FUN_710000b240(aLStack200,this,aLStack248);
        lib::L2CValue::_L2CValue(aLStack216);
        lib::L2CValue::_L2CValue(aLStack232);
        lib::L2CValue::_L2CValue(aLStack248);
        this_00 = (L2CTable *)operator_new(0x48);
        lib::L2CTable::L2CTable(this_00,0);
        lib::L2CValue::L2CValue(aLStack264,this_00);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0x18cdc1683);
        lib::L2CValue::L2CValue(aLStack312,0);
        lib::L2CValue::operator_(pLVar6,aLStack312);
        lib::L2CValue::_L2CValue(aLStack312);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack312,0);
        lib::L2CValue::operator_(pLVar6,aLStack312);
        lib::L2CValue::_L2CValue(aLStack312);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0x162d277af);
        lib::L2CValue::L2CValue(aLStack312,0);
        lib::L2CValue::operator_(pLVar6,aLStack312);
        lib::L2CValue::_L2CValue(aLStack312);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0x18cdc1683);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0x1fbdb2615);
        this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0x162d277af);
        pfVar9 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack312,*pfVar9);
        lib::L2CValue::L2CValue(aLStack296,pfVar9[1]);
        lib::L2CValue::L2CValue(aLStack280,pfVar9[2]);
        lib::L2CValue::operator_(pLVar6,aLStack312);
        lib::L2CValue::operator_(pLVar8,aLStack296);
        lib::L2CValue::operator_(this_01,aLStack280);
        lib::L2CValue::_L2CValue(aLStack280);
        lib::L2CValue::_L2CValue(aLStack296);
        lib::L2CValue::_L2CValue(aLStack312);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack200,0x18cdc1683);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0x18cdc1683);
        lib::L2CValue::operator_(pLVar6,pLVar8);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x18cdc1683);
        lib::L2CValue::operator_(pLVar6,aLStack312);
        lib::L2CValue::_L2CValue(aLStack312);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack200,0x1fbdb2615);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack264,0x1fbdb2615);
        lib::L2CValue::operator_(pLVar6,pLVar8);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x1fbdb2615);
        lib::L2CValue::operator_(pLVar6,aLStack312);
        lib::L2CValue::_L2CValue(aLStack312);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x18cdc1683);
        lib::L2CValue::L2CValue(aLStack312,0.0001);
        uVar5 = lib::L2CValue::operator_(pLVar6,aLStack312);
        lib::L2CValue::_L2CValue(aLStack312);
        if ((uVar5 & 1) != 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x18cdc1683);
          lib::L2CValue::L2CValue(aLStack312,-0.0001);
          uVar5 = lib::L2CValue::operator_(aLStack312,pLVar6);
          lib::L2CValue::_L2CValue(aLStack312);
          if ((uVar5 & 1) != 0) {
            pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x18cdc1683);
            lib::L2CValue::L2CValue(aLStack312,0.0);
            lib::L2CValue::operator_(pLVar6,aLStack312);
            lib::L2CValue::_L2CValue(aLStack312);
          }
        }
        pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack312,0.0001);
        uVar5 = lib::L2CValue::operator_(pLVar6,aLStack312);
        lib::L2CValue::_L2CValue(aLStack312);
        if ((uVar5 & 1) != 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x1fbdb2615);
          lib::L2CValue::L2CValue(aLStack312,-0.0001);
          uVar5 = lib::L2CValue::operator_(aLStack312,pLVar6);
          lib::L2CValue::_L2CValue(aLStack312);
          if ((uVar5 & 1) != 0) {
            pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x1fbdb2615);
            lib::L2CValue::L2CValue(aLStack312,0.0);
            lib::L2CValue::operator_(pLVar6,aLStack312);
            lib::L2CValue::_L2CValue(aLStack312);
          }
        }
        pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x18cdc1683);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x1fbdb2615);
        fVar11 = (float)lib::L2CValue::as_number(pLVar6);
        fVar12 = (float)lib::L2CValue::as_number(pLVar8);
        fVar11 = (float)app::sv_math::vec2_length(fVar11,fVar12);
        lib::L2CValue::L2CValue(aLStack312,fVar11);
        lib::L2CValue::L2CValue(aLStack344,0xdf05c072b);
        lib::L2CValue::L2CValue(aLStack360,0x15e74e8d35);
        uVar5 = lib::L2CValue::as_integer(aLStack344);
        uVar10 = lib::L2CValue::as_integer(aLStack360);
        fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (this->moduleAccessor,uVar5,uVar10);
        lib::L2CValue::L2CValue(aLStack328,fVar11);
        uVar5 = lib::L2CValue::operator_(aLStack312,aLStack328);
        lib::L2CValue::_L2CValue(aLStack328);
        lib::L2CValue::_L2CValue(aLStack360);
        lib::L2CValue::_L2CValue(aLStack344);
        lib::L2CValue::_L2CValue(aLStack312);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack312,_FIGHTER_POPO_STATUS_FINAL_FLAG_COUPLE);
          iVar3 = lib::L2CValue::as_integer(aLStack312);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::_L2CValue(aLStack312);
          lib::L2CValue::L2CValue(aLStack344,_FIGHTER_POPO_LINK_NO_PARTNER);
          iVar3 = lib::L2CValue::as_integer(aLStack344);
          bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack328,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack312,true);
          uVar5 = lib::L2CValue::operator__(aLStack328,aLStack312);
          lib::L2CValue::_L2CValue(aLStack312);
          lib::L2CValue::_L2CValue(aLStack328);
          lib::L2CValue::_L2CValue(aLStack344);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack312,0x254341e6cf);
            lib::L2CValue::L2CValue(aLStack344,_FIGHTER_POPO_LINK_NO_PARTNER);
            lib::L2CValue::L2CValue(aLStack360,0x227080a11b);
            lib::L2CValue::L2CValue(aLStack376,_FIGHTER_POPO_STATUS_KIND_FINAL_PARTNER);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack312);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack344);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack360);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack376);
            app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
            lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
            lib::L2CValue::_L2CValue(aLStack328);
            lib::L2CValue::_L2CValue(aLStack376);
            lib::L2CValue::_L2CValue(aLStack360);
            lib::L2CValue::_L2CValue(aLStack344);
            lib::L2CValue::_L2CValue(aLStack312);
          }
          lib::L2CValue::L2CValue(aLStack360,_FIGHTER_POPO_STATUS_FINAL_FLAG_COUPLE_MOVE);
          iVar3 = lib::L2CValue::as_integer(aLStack360);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack344,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue(aLStack312,true);
          uVar5 = lib::L2CValue::operator__(aLStack344,aLStack312);
          lib::L2CValue::_L2CValue(aLStack312);
          lib::L2CValue::_L2CValue(aLStack344);
          lib::L2CValue::_L2CValue(aLStack360);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack344,SITUATION_KIND_AIR);
            lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xa8);
            lib::L2CValue::_L2CValue(aLStack344);
          }
          lib::L2CValue::L2CValue(aLStack360,0xb9a34d6d3);
          iVar3 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack376,iVar3);
          lib::L2CValue::L2CValue(aLStack312,_SITUATION_KIND_GROUND);
          uVar5 = lib::L2CValue::operator__(aLStack376,aLStack312);
          lib::L2CValue::_L2CValue(aLStack312);
          lib::L2CValue::_L2CValue(aLStack376);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack312,0xf9f32ea25);
            lib::L2CValue::operator_(aLStack360,aLStack312);
            lib::L2CValue::_L2CValue(aLStack312);
          }
          lib::L2CValue::L2CValue(aLStack376,0x254341e6cf);
          lib::L2CValue::L2CValue(aLStack392,_FIGHTER_POPO_LINK_NO_PARTNER);
          lib::L2CValue::L2CValue(aLStack408,0x22fe7e65ef);
          lib::L2CValue::L2CValue(aLStack424,false);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack376);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack392);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack408);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack360);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack424);
          app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
          lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
          lib::L2CValue::_L2CValue(aLStack312);
          lib::L2CValue::_L2CValue(aLStack424);
          lib::L2CValue::_L2CValue(aLStack408);
          lib::L2CValue::_L2CValue(aLStack392);
          lib::L2CValue::_L2CValue(aLStack376);
          lib::L2CValue::_L2CValue(aLStack360);
        }
        lib::L2CValue::_L2CValue(aLStack264);
        lib::L2CValue::_L2CValue(aLStack200);
        pLVar6 = aLStack152;
      }
      lib::L2CValue::_L2CValue(pLVar6);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  lib::L2CValue::_L2CValue(aLStack136);
  return;
}

