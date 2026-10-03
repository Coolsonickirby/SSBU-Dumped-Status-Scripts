
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001f660(undefined8 param_1,L2CFighterCommon *param_2,L2CValue *param_3,L2CValue *param_4
                   )

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  HitStatus HVar4;
  Hash40 HVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  void *pvVar8;
  BattleObjectModuleAccessor *pBVar9;
  float fVar10;
  float fVar11;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  FUN_7100020080(param_2);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar5 = lib::L2CValue::as_hash(param_3);
  fVar10 = (float)lib::L2CValue::as_number(aLStack96);
  fVar11 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (param_2->moduleAccessor,HVar5,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEMON_STATUS_SPECIAL_LW_FLAG_HIT);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(param_2->moduleAccessor,iVar2);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  lib::L2CValue::L2CValue(aLStack112,_ENERGY_MOTION_RESET_TYPE_AIR_TRANS);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)param_2);
  lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack96);
  lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack112);
  lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack128);
  lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack144);
  lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack160);
  lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack176);
  lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack192);
  app::sv_kinetic_energy::reset_energy(param_2->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::KineticModule__enable_energy_impl(param_2->moduleAccessor,iVar2);
  lib::L2CValue::~L2CValue(aLStack96);
  app::LinkEventThrow::new_l2c_table();
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x105a79305b);
  lib::L2CValue::L2CValue(aLStack96,0xb16478559);
  lib::L2CValue::operator=(pLVar6,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0xc3e3c1ede);
  lib::L2CValue::operator=(pLVar6,param_4);
  lib::L2CValue::L2CValue(aLStack96,LINK_NO_CAPTURE);
  FUN_7100020170(aLStack208,param_2,aLStack96,aLStack112);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack144,LINK_NO_CAPTURE);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::LinkModule__is_linked_impl(param_2->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar7 = lib::L2CValue::operator==(aLStack128,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,LINK_NO_CAPTURE);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    uVar3 = app::lua_bind::LinkModule__get_node_object_id_impl(param_2->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack96,uVar3);
    lib::L2CValue::~L2CValue(aLStack128);
    uVar3 = lib::L2CValue::as_integer(aLStack96);
    pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar3);
    if (pvVar8 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack128,(L2CValue *)&FIGHTER_STATUS_BOSS_DEAD_WORK_INT_SITUATION_KIND_PREVIOUS);
    }
    else {
      lib::L2CValue::L2CValue(aLStack128,pvVar8);
    }
    lib::L2CValue::L2CValue(aLStack144,_HIT_STATUS_INVINCIBLE);
    lib::L2CValue::L2CValue(aLStack160,0);
    HVar4 = lib::L2CValue::as_integer(aLStack144);
    iVar2 = lib::L2CValue::as_integer(aLStack160);
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack128);
    app::lua_bind::HitModule__set_whole_impl(pBVar9,HVar4,iVar2);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack224,L2CFighterDemon::status::SpecialLwGround_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(param_2,(L2CValue)0x20);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

