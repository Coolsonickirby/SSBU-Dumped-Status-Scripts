
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponEdgeFlaredummy::status::Fly_main_loop(L2CWeaponEdgeFlaredummy *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  Weapon *pWVar6;
  Hash40 HVar7;
  BattleObjectModuleAccessor *pBVar8;
  float fVar9;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  FUN_710002f8d0(aLStack128,this);
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar4 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_EDGE_FLAREDUMMY_INSTANCE_WORK_ID_FLOAT_POWER);
    fVar9 = (float)lib::L2CValue::as_number(aLStack112);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar2);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_EDGE_FLAREDUMMY_INSTANCE_WORK_ID_INT_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack128,iVar2);
  lib::L2CValue::L2CValue(aLStack112,0);
  uVar4 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar4 & 1) == 0) {
    this_00 = &this->globalTable;
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
    lib::L2CValue::L2CValue(aLStack112,0);
    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack144,_WEAPON_EDGE_FLAREDUMMY_INSTANCE_WORK_ID_FLOAT_POWER);
      pLVar5 = (L2CValue *)lib::L2CValue::as_integer(aLStack144);
      fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,(int)pLVar5);
      lib::L2CValue::L2CValue(aLStack112,fVar9);
      lib::L2CAgent::math_ceil((L2CAgent *)aLStack112,pLVar5);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      do {
        lib::L2CValue::L2CValue(aLStack144,_WEAPON_EDGE_FLAREDUMMY_INSTANCE_WORK_ID_INT_COUNT);
        iVar2 = lib::L2CValue::as_integer(aLStack144);
        iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::L2CValue(aLStack112,iVar2);
        uVar4 = lib::L2CValue::operator_(aLStack112,aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((uVar4 & 1) == 0) {
LAB_7100030ebc:
          while( true ) {
            lib::L2CValue::L2CValue(aLStack144,_WEAPON_EDGE_FLAREDUMMY_INSTANCE_WORK_ID_INT_COUNT);
            iVar2 = lib::L2CValue::as_integer(aLStack144);
            iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
            lib::L2CValue::L2CValue(aLStack112,iVar2);
            uVar4 = lib::L2CValue::operator_(aLStack128,aLStack112);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack144);
            if ((uVar4 & 1) == 0) break;
            pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
            lib::L2CValue::L2CValue(aLStack112,_WEAPON_EDGE_FLARE2_STATUS_KIND_END);
            pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
            iVar2 = lib::L2CValue::as_integer(aLStack112);
            app::WeaponSpecializer_EdgeFlaredummy::change_status_first(pBVar8,iVar2);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,_WEAPON_EDGE_FLAREDUMMY_INSTANCE_WORK_ID_INT_COUNT);
            iVar2 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar2);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,_LINK_NO_ARTICLE);
            lib::L2CValue::L2CValue(aLStack144,0x123316d5b8);
            iVar2 = lib::L2CValue::as_integer(aLStack112);
            HVar7 = lib::L2CValue::as_hash(aLStack144);
            app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar2,HVar7,0);
            lib::L2CValue::_L2CValue(aLStack144);
            lib::L2CValue::_L2CValue(aLStack112);
          }
          lib::L2CValue::L2CValue(aLStack112,_WEAPON_EDGE_FLAREDUMMY_GENERATE_ARTICLE_FLARE2);
          iVar2 = lib::L2CValue::as_integer(aLStack112);
          iVar2 = app::lua_bind::ArticleModule__get_num_impl(this->moduleAccessor,iVar2);
          lib::L2CValue::L2CValue(aLStack144,iVar2);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,0);
          uVar4 = lib::L2CValue::operator__(aLStack144,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar4 & 1) == 0) {
            FUN_710002fb30(aLStack112,this);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          }
          else {
            lib::L2CValue::L2CValue(aLStack160,0x199c462b5d);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
            app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
            lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::_L2CValue(aLStack160);
            lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          }
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          return;
        }
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
        pWVar6 = (Weapon *)lib::L2CValue::as_pointer(pLVar5);
        bVar1 = app::WeaponSpecializer_EdgeFlaredummy::is_generatable(pWVar6);
        lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack112,false);
        uVar4 = lib::L2CValue::operator__(aLStack144,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack176,_WEAPON_EDGE_FLAREDUMMY_INSTANCE_WORK_ID_INT_COUNT);
          iVar2 = lib::L2CValue::as_integer(aLStack176);
          iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
          lib::L2CValue::L2CValue(aLStack160,iVar2);
          lib::L2CValue::L2CValue(aLStack112,0.0);
          lib::L2CValue::operator_(aLStack160,aLStack112);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_WEAPON_EDGE_FLAREDUMMY_INSTANCE_WORK_ID_FLOAT_POWER);
          fVar9 = (float)lib::L2CValue::as_number(aLStack144);
          iVar2 = lib::L2CValue::as_integer(aLStack112);
          app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar2);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack176);
          goto LAB_7100030ebc;
        }
        lib::L2CValue::L2CValue(aLStack112,_LINK_NO_ARTICLE);
        lib::L2CValue::L2CValue(aLStack144,0x123316d5b8);
        iVar2 = lib::L2CValue::as_integer(aLStack112);
        HVar7 = lib::L2CValue::as_hash(aLStack144);
        app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar2,HVar7,0);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_WEAPON_EDGE_FLAREDUMMY_GENERATE_ARTICLE_FLARE2);
        iVar2 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar2,false,-1);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack144,_WEAPON_EDGE_FLAREDUMMY_GENERATE_ARTICLE_FLARE2);
        iVar2 = lib::L2CValue::as_integer(aLStack144);
        iVar2 = app::lua_bind::ArticleModule__get_num_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::L2CValue(aLStack112,iVar2);
        lib::L2CValue::L2CValue(aLStack160,_WEAPON_EDGE_FLAREDUMMY_INSTANCE_WORK_ID_INT_COUNT);
        iVar2 = lib::L2CValue::as_integer(aLStack112);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack144);
      } while( true );
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_EDGE_FLAREDUMMY_STATUS_KIND_TRY);
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

