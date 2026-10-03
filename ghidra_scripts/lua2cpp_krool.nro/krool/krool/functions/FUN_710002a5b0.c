
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002a5b0(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  float fVar7;
  L2CValue aLStack272 [16];
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
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KROOL_STATUS_SPECIAL_N_FLAG_SHOOT_IRONBALL_END);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KROOL_STATUS_SPECIAL_N_FLAG_SHOOT_IRONBALL);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KROOL_GENERATE_ARTICLE_IRONBALL);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar2 = app::lua_bind::ArticleModule__is_exist_impl(param_2->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((bVar1 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KROOL_GENERATE_ARTICLE_IRONBALL);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::ArticleModule__generate_article_enable_impl
                    (param_2->moduleAccessor,iVar3,false,-1);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,0x20cbc92683);
          lib::L2CValue::L2CValue(aLStack96,1);
          lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LOG_DATA_INT_SHOOT_NUM);
          lib::L2CAgent::clear_lua_stack(param_2);
          lib::L2CAgent::push_lua_stack(param_2,aLStack80);
          lib::L2CAgent::push_lua_stack(param_2,aLStack96);
          lib::L2CAgent::push_lua_stack(param_2,aLStack112);
          app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
          lib::L2CAgent::pop_lua_stack(param_2,1);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack96);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KROOL_STATUS_SPECIAL_N_FLAG_NO_SHOOT_IRONBALL);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar3);
        }
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KROOL_STATUS_SPECIAL_N_FLAG_SHOOT_IRONBALL_END);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar3);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        fVar7 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl
                                 (param_2->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack96,fVar7);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        fVar7 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl
                                 (param_2->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack112,fVar7);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack160,0x14c45f5bb7);
        uVar4 = lib::L2CValue::as_integer(aLStack80);
        uVar5 = lib::L2CValue::as_integer(aLStack160);
        fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (param_2->moduleAccessor,uVar4,uVar5);
        lib::L2CValue::L2CValue(aLStack144,fVar7);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack176,0x18b5228cbb);
        uVar4 = lib::L2CValue::as_integer(aLStack80);
        uVar5 = lib::L2CValue::as_integer(aLStack176);
        fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (param_2->moduleAccessor,uVar4,uVar5);
        lib::L2CValue::L2CValue(aLStack160,fVar7);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack192,0x18c225bc2d);
        uVar4 = lib::L2CValue::as_integer(aLStack80);
        uVar5 = lib::L2CValue::as_integer(aLStack192);
        fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (param_2->moduleAccessor,uVar4,uVar5);
        lib::L2CValue::L2CValue(aLStack176,fVar7);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack80);
        pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator==(pLVar6,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,-0.7);
          uVar4 = lib::L2CValue::operator<(aLStack112,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar4 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
            lib::L2CValue::L2CValue(aLStack192,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
            lib::L2CValue::L2CValue(aLStack208,0.0);
            lib::L2CValue::L2CValue(aLStack224,0.0);
            lib::L2CValue::L2CValue(aLStack240,0.0);
            lib::L2CValue::L2CValue(aLStack256,0.0);
            lib::L2CValue::L2CValue(aLStack272,0.0);
            lib::L2CAgent::clear_lua_stack(param_2);
            lib::L2CAgent::push_lua_stack(param_2,aLStack80);
            lib::L2CAgent::push_lua_stack(param_2,aLStack192);
            lib::L2CAgent::push_lua_stack(param_2,aLStack208);
            lib::L2CAgent::push_lua_stack(param_2,aLStack224);
            lib::L2CAgent::push_lua_stack(param_2,aLStack240);
            lib::L2CAgent::push_lua_stack(param_2,aLStack256);
            lib::L2CAgent::push_lua_stack(param_2,aLStack272);
            app::sv_kinetic_energy::reset_energy(param_2->luaStateAgent);
            lib::L2CValue::~L2CValue(aLStack272);
            lib::L2CValue::~L2CValue(aLStack256);
            lib::L2CValue::~L2CValue(aLStack240);
            lib::L2CValue::~L2CValue(aLStack224);
            lib::L2CValue::~L2CValue(aLStack208);
            lib::L2CValue::~L2CValue(aLStack192);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::operator+(aLStack112,aLStack176);
            lib::L2CValue::operator=(aLStack112,aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
            lib::L2CAgent::clear_lua_stack(param_2);
            lib::L2CAgent::push_lua_stack(param_2,aLStack80);
            lib::L2CAgent::push_lua_stack(param_2,aLStack112);
            app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
            lib::L2CValue::~L2CValue(aLStack80);
          }
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::KineticModule__enable_energy_impl(param_2->moduleAccessor,iVar3);
          lib::L2CValue::~L2CValue(aLStack80);
        }
        pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar4 = lib::L2CValue::operator==(pLVar6,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
          lib::L2CValue::L2CValue(aLStack192,ENERGY_STOP_RESET_TYPE_AIR);
          lib::L2CValue::L2CValue(aLStack208,0.0);
          lib::L2CValue::L2CValue(aLStack224,0.0);
          lib::L2CValue::L2CValue(aLStack240,0.0);
          lib::L2CValue::L2CValue(aLStack256,0.0);
          lib::L2CValue::L2CValue(aLStack272,0.0);
          lib::L2CAgent::clear_lua_stack(param_2);
          lib::L2CAgent::push_lua_stack(param_2,aLStack80);
          lib::L2CAgent::push_lua_stack(param_2,aLStack192);
          lib::L2CAgent::push_lua_stack(param_2,aLStack208);
          lib::L2CAgent::push_lua_stack(param_2,aLStack224);
          lib::L2CAgent::push_lua_stack(param_2,aLStack240);
          lib::L2CAgent::push_lua_stack(param_2,aLStack256);
          lib::L2CAgent::push_lua_stack(param_2,aLStack272);
          app::sv_kinetic_energy::reset_energy(param_2->luaStateAgent);
          lib::L2CValue::~L2CValue(aLStack272);
          lib::L2CValue::~L2CValue(aLStack256);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack224);
          lib::L2CValue::~L2CValue(aLStack208);
          lib::L2CValue::~L2CValue(aLStack192);
          lib::L2CValue::~L2CValue(aLStack80);
          fVar7 = (float)app::lua_bind::PostureModule__lr_impl(param_2->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack208,fVar7);
          lib::L2CValue::operator*(aLStack160,aLStack208);
          lib::L2CValue::operator-(aLStack96,aLStack192);
          lib::L2CValue::operator=(aLStack96,aLStack80);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
          lib::L2CValue::L2CValue(aLStack192,ENERGY_STOP_RESET_TYPE_GROUND);
          lib::L2CValue::L2CValue(aLStack208,0.0);
          lib::L2CValue::L2CValue(aLStack224,0.0);
          lib::L2CValue::L2CValue(aLStack240,0.0);
          lib::L2CValue::L2CValue(aLStack256,0.0);
          lib::L2CValue::L2CValue(aLStack272,0.0);
          lib::L2CAgent::clear_lua_stack(param_2);
          lib::L2CAgent::push_lua_stack(param_2,aLStack80);
          lib::L2CAgent::push_lua_stack(param_2,aLStack192);
          lib::L2CAgent::push_lua_stack(param_2,aLStack208);
          lib::L2CAgent::push_lua_stack(param_2,aLStack224);
          lib::L2CAgent::push_lua_stack(param_2,aLStack240);
          lib::L2CAgent::push_lua_stack(param_2,aLStack256);
          lib::L2CAgent::push_lua_stack(param_2,aLStack272);
          app::sv_kinetic_energy::reset_energy(param_2->luaStateAgent);
          lib::L2CValue::~L2CValue(aLStack272);
          lib::L2CValue::~L2CValue(aLStack256);
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack224);
          lib::L2CValue::~L2CValue(aLStack208);
          lib::L2CValue::~L2CValue(aLStack192);
          lib::L2CValue::~L2CValue(aLStack80);
          fVar7 = (float)app::lua_bind::PostureModule__lr_impl(param_2->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack208,fVar7);
          lib::L2CValue::operator*(aLStack144,aLStack208);
          lib::L2CValue::operator-(aLStack96,aLStack192);
          lib::L2CValue::operator=(aLStack96,aLStack80);
        }
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        lib::L2CValue::L2CValue(aLStack192,0.0);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,aLStack80);
        lib::L2CAgent::push_lua_stack(param_2,aLStack96);
        lib::L2CAgent::push_lua_stack(param_2,aLStack192);
        app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::KineticModule__enable_energy_impl(param_2->moduleAccessor,iVar3);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack96);
      }
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

