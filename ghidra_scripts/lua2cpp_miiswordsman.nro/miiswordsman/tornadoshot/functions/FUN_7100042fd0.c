
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100042fd0(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  BattleObject **this;
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  GroundCorrectKind GVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar6 = lib::L2CValue::operator<=(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_GROUND_TOUCH_FLAG_ALL);
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      bVar2 = app::lua_bind::GroundModule__is_touch_impl(param_2->moduleAccessor,uVar4);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,true);
        lib::L2CValue::L2CValue(aLStack112,_WEAPON_INSTANCE_WORK_ID_FLAG_SWALLOWED);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((bVar1 & 1U) != 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,0xe);
          lib::L2CValue::L2CValue(aLStack80,1);
          uVar6 = lib::L2CValue::operator<(pLVar7,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack80,false);
            lib::L2CValue::operator=(aLStack96,aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
          }
        }
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack128,0x337fe50fd5);
          lib::L2CAgent::clear_lua_stack(param_2);
          lib::L2CAgent::push_lua_stack(param_2,aLStack128);
          app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
          lib::L2CAgent::pop_lua_stack(param_2,1);
          lib::L2CValue::L2CValue(aLStack80,true);
          uVar6 = lib::L2CValue::operator==(aLStack112,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack128);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack112,0x199c462b5d);
            lib::L2CAgent::clear_lua_stack(param_2);
            lib::L2CAgent::push_lua_stack(param_2,aLStack112);
            app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
            lib::L2CAgent::pop_lua_stack(param_2,1);
            lib::L2CValue::~L2CValue(aLStack80);
            pLVar7 = aLStack112;
            goto LAB_71000430dc;
          }
        }
        lib::L2CValue::~L2CValue(aLStack96);
      }
      bVar2 = app::lua_bind::StatusModule__is_changing_impl(param_2->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar6 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        this = &param_2[2].battleObject;
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x17);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator==(pLVar7,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar6 & 1) != 0) {
          pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
          lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
          uVar6 = lib::L2CValue::operator==(pLVar7,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::~L2CValue(aLStack96);
            goto LAB_7100043308;
          }
        }
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x17);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator==(pLVar7,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar6 & 1) != 0) goto LAB_71000430e0;
        pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator==(pLVar7,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar6 & 1) == 0) goto LAB_71000435f4;
      }
      else {
        lib::L2CValue::~L2CValue(aLStack96);
      }
LAB_7100043308:
      pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator==(pLVar7,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        lua2cpp::L2CFighterBase::set_situation(param_2,(L2CValue)0xb0);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
        GVar5 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(param_2->moduleAccessor,GVar5);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack112,_MA_MSC_CMD_SLOPE_SLOPE);
        lib::L2CValue::L2CValue(aLStack128,MA_MSC_CMD_SLOEP_SLOPE_KIND_NONE);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,aLStack112);
        lib::L2CAgent::push_lua_stack(param_2,aLStack128);
        app::sv_module_access::slope(param_2->luaStateAgent);
        lib::L2CAgent::pop_lua_stack(param_2,1);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue
                  (aLStack112,_WEAPON_MIISWORDSMAN_TORNADOSHOT_KINETIC_ENERGY_ID_GRAVITY);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::KineticModule__enable_energy_impl(param_2->moduleAccessor,iVar3);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        lua2cpp::L2CFighterBase::set_situation(param_2,(L2CValue)0xb0);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND);
        GVar5 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::GroundModule__correct_impl(param_2->moduleAccessor,GVar5);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack112,_MA_MSC_CMD_SLOPE_SLOPE);
        lib::L2CValue::L2CValue(aLStack128,_MA_MSC_CMD_SLOEP_SLOPE_KIND_TOP);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,aLStack112);
        lib::L2CAgent::push_lua_stack(param_2,aLStack128);
        app::sv_module_access::slope(param_2->luaStateAgent);
        lib::L2CAgent::pop_lua_stack(param_2,1);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue
                  (aLStack112,_WEAPON_MIISWORDSMAN_TORNADOSHOT_KINETIC_ENERGY_ID_GRAVITY);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::KineticModule__unable_energy_impl(param_2->moduleAccessor,iVar3);
      }
      pLVar7 = aLStack112;
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0x199c462b5d);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack96);
      app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      pLVar7 = aLStack80;
LAB_71000430dc:
      lib::L2CValue::~L2CValue(pLVar7);
LAB_71000430e0:
      pLVar7 = aLStack96;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__dec_int_impl(param_2->moduleAccessor,iVar3);
    pLVar7 = aLStack80;
  }
  lib::L2CValue::~L2CValue(pLVar7);
LAB_71000435f4:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

