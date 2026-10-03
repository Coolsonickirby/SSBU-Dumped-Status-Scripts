
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000336d0(L2CValue *param_1,L2CAgent *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  HitStatus HVar7;
  long lVar8;
  L2CValue *pLVar9;
  ulong uVar10;
  Hash40 HVar11;
  void *pvVar12;
  BattleObjectModuleAccessor *pBVar13;
  ulong uVar14;
  float fVar15;
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
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEMON_STATUS_SPECIAL_LW_INT_PARAM_ID_HASH);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  lVar8 = app::lua_bind::WorkModule__get_int64_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,lVar8);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_DEMON_STATUS_SPECIAL_LW_FLAG_HIT);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack160);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEMON_STATUS_SPECIAL_LW_FLAG_HIT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack160,LINK_NO_CAPTURE);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::LinkModule__is_linked_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack160);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,LINK_NO_CAPTURE);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      uVar4 = app::lua_bind::LinkModule__get_node_object_id_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack160,uVar4);
      lib::L2CValue::~L2CValue(aLStack96);
      app::LinkEventThrow::new_l2c_table();
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x105a79305b);
      lib::L2CValue::L2CValue(aLStack96,0x54f934137);
      lib::L2CValue::operator=(pLVar9,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      pLVar9 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0xc3e3c1ede);
      lib::L2CValue::L2CValue(aLStack96,0x7fb997a80);
      lib::L2CValue::operator=(pLVar9,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,LINK_NO_CAPTURE);
      FUN_7100020170(aLStack192,param_2,aLStack96,aLStack176);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0x50000000);
      uVar10 = lib::L2CValue::operator==(aLStack160,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar10 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ATTACK_ABSOLUTE_KIND_THROW);
        lib::L2CValue::L2CValue(aLStack208,0x54f934137);
        lib::L2CValue::L2CValue(aLStack224,0);
        lib::L2CValue::L2CValue(aLStack240,0);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        uVar4 = lib::L2CValue::as_integer(aLStack160);
        HVar11 = lib::L2CValue::as_hash(aLStack208);
        iVar5 = lib::L2CValue::as_integer(aLStack224);
        iVar6 = lib::L2CValue::as_integer(aLStack240);
        app::lua_bind::AttackModule__hit_absolute_joint_impl
                  (param_2->moduleAccessor,iVar3,uVar4,HVar11,iVar5,iVar6);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack96);
        uVar4 = lib::L2CValue::as_integer(aLStack160);
        pvVar12 = (void *)app::sv_battle_object::module_accessor(uVar4);
        if (pvVar12 == (void *)0x0) {
          lib::L2CValue::L2CValue
                    (aLStack208,
                     (L2CValue *)&FIGHTER_STATUS_BOSS_DEAD_WORK_INT_SITUATION_KIND_PREVIOUS);
        }
        else {
          lib::L2CValue::L2CValue(aLStack208,pvVar12);
        }
        lib::L2CValue::L2CValue(aLStack240,0);
        iVar3 = lib::L2CValue::as_integer(aLStack240);
        pBVar13 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack208);
        iVar3 = app::lua_bind::HitModule__get_whole_impl(pBVar13,iVar3);
        lib::L2CValue::L2CValue(aLStack224,iVar3);
        lib::L2CValue::L2CValue(aLStack96,_HIT_STATUS_INVINCIBLE);
        uVar10 = lib::L2CValue::operator==(aLStack224,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack240);
        if ((uVar10 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,_HIT_STATUS_NORMAL);
          lib::L2CValue::L2CValue(aLStack224,0);
          HVar7 = lib::L2CValue::as_integer(aLStack96);
          iVar3 = lib::L2CValue::as_integer(aLStack224);
          pBVar13 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack208);
          app::lua_bind::HitModule__set_whole_impl(pBVar13,HVar7,iVar3);
          lib::L2CValue::~L2CValue(aLStack224);
          lib::L2CValue::~L2CValue(aLStack96);
        }
        lib::L2CValue::~L2CValue(aLStack208);
      }
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
    }
    FUN_7100020080(param_2);
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CValue::L2CValue(aLStack160,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack224,0x73e7379b9);
    uVar10 = lib::L2CValue::as_integer(aLStack112);
    uVar14 = lib::L2CValue::as_integer(aLStack224);
    fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (param_2->moduleAccessor,uVar10,uVar14);
    lib::L2CValue::L2CValue(aLStack208,fVar15);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack96);
    lib::L2CAgent::push_lua_stack(param_2,aLStack160);
    lib::L2CAgent::push_lua_stack(param_2,aLStack176);
    lib::L2CAgent::push_lua_stack(param_2,aLStack208);
    lib::L2CAgent::push_lua_stack(param_2,aLStack240);
    lib::L2CAgent::push_lua_stack(param_2,aLStack256);
    lib::L2CAgent::push_lua_stack(param_2,aLStack272);
    app::sv_kinetic_energy::reset_energy(param_2->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__enable_energy_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack160,ENERGY_STOP_RESET_TYPE_AIR);
    lib::L2CValue::L2CValue(aLStack224,0x7276848f8);
    uVar10 = lib::L2CValue::as_integer(aLStack112);
    uVar14 = lib::L2CValue::as_integer(aLStack224);
    fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (param_2->moduleAccessor,uVar10,uVar14);
    lib::L2CValue::L2CValue(aLStack208,fVar15);
    fVar15 = (float)app::lua_bind::PostureModule__lr_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack240,fVar15);
    lib::L2CValue::operator*(aLStack208,aLStack240);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack96);
    lib::L2CAgent::push_lua_stack(param_2,aLStack160);
    lib::L2CAgent::push_lua_stack(param_2,aLStack176);
    lib::L2CAgent::push_lua_stack(param_2,aLStack256);
    lib::L2CAgent::push_lua_stack(param_2,aLStack272);
    lib::L2CAgent::push_lua_stack(param_2,aLStack288);
    lib::L2CAgent::push_lua_stack(param_2,aLStack304);
    app::sv_kinetic_energy::reset_energy(param_2->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__enable_energy_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack160,0xd053d90ef);
    uVar10 = lib::L2CValue::as_integer(aLStack112);
    uVar14 = lib::L2CValue::as_integer(aLStack160);
    fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (param_2->moduleAccessor,uVar10,uVar14);
    lib::L2CValue::L2CValue(aLStack96,fVar15);
    lib::L2CValue::operator=(aLStack144,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack176,0x1220fc2660);
    lib::L2CValue::L2CValue(aLStack208,0);
    uVar10 = lib::L2CValue::as_integer(aLStack176);
    uVar14 = lib::L2CValue::as_integer(aLStack208);
    fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (param_2->moduleAccessor,uVar10,uVar14);
    lib::L2CValue::L2CValue(aLStack160,fVar15);
    lib::L2CValue::L2CValue(aLStack240,0xafae6a09d);
    uVar10 = lib::L2CValue::as_integer(aLStack112);
    uVar14 = lib::L2CValue::as_integer(aLStack240);
    fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (param_2->moduleAccessor,uVar10,uVar14);
    lib::L2CValue::L2CValue(aLStack224,fVar15);
    lib::L2CValue::operator*(aLStack160,aLStack224);
    lib::L2CValue::operator=(aLStack128,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    lib::L2CValue::L2CValue(aLStack160,ENERGY_CONTROLLER_RESET_TYPE_FALL_ADJUST);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack96);
    lib::L2CAgent::push_lua_stack(param_2,aLStack160);
    lib::L2CAgent::push_lua_stack(param_2,aLStack176);
    lib::L2CAgent::push_lua_stack(param_2,aLStack208);
    lib::L2CAgent::push_lua_stack(param_2,aLStack224);
    lib::L2CAgent::push_lua_stack(param_2,aLStack240);
    lib::L2CAgent::push_lua_stack(param_2,aLStack256);
    app::sv_kinetic_energy::reset_energy(param_2->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack96);
    lib::L2CAgent::push_lua_stack(param_2,aLStack128);
    lib::L2CAgent::push_lua_stack(param_2,aLStack160);
    app::sv_kinetic_energy::set_limit_speed(param_2->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack144);
    app::sv_kinetic_energy::controller_set_accel_x_mul(param_2->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__enable_energy_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

