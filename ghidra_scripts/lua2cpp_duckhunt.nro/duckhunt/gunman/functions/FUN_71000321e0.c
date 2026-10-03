
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000321e0(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue *this;
  ulong uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
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
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__dec_int_impl(param_2->moduleAccessor,iVar3);
    this = aLStack80;
    goto LAB_7100032648;
  }
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue(aLStack80,7);
  uVar4 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0x22cb7fd743);
    fVar9 = (float)app::lua_bind::PostureModule__lr_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,fVar9);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar4 = lib::L2CValue::operator<(aLStack80,aLStack112);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,0x223170ea20);
      lib::L2CValue::operator=(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack112,_MA_MSC_CMD_EFFECT_EFFECT_FOLLOW);
    lib::L2CValue::L2CValue(aLStack144,0x31ed91fca);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CValue::L2CValue(aLStack208,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_FLOAT_GUN_OFFSET_Y);
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack192,fVar9);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator+(aLStack192,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack256,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_FLOAT_GUN_OFFSET_Z);
    iVar3 = lib::L2CValue::as_integer(aLStack256);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack240,fVar9);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator+(aLStack240,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::L2CValue(aLStack304,1.0);
    lib::L2CValue::L2CValue(aLStack320,false);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack112);
    lib::L2CAgent::push_lua_stack(param_2,aLStack96);
    lib::L2CAgent::push_lua_stack(param_2,aLStack144);
    lib::L2CAgent::push_lua_stack(param_2,aLStack160);
    lib::L2CAgent::push_lua_stack(param_2,aLStack176);
    lib::L2CAgent::push_lua_stack(param_2,aLStack224);
    lib::L2CAgent::push_lua_stack(param_2,aLStack80);
    lib::L2CAgent::push_lua_stack(param_2,aLStack272);
    lib::L2CAgent::push_lua_stack(param_2,aLStack288);
    lib::L2CAgent::push_lua_stack(param_2,aLStack304);
    lib::L2CAgent::push_lua_stack(param_2,aLStack320);
    app::sv_module_access::effect(param_2->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_2,1);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack80,0x17f2dae1a4);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    iVar3 = app::lua_bind::SoundModule__play_se_impl
                      (param_2->moduleAccessor,HVar5,true,false,false,false,0);
    lib::L2CValue::L2CValue(aLStack336,iVar3);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue(aLStack80,2);
  uVar4 = lib::L2CValue::operator<=(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack352,_WEAPON_DUCKHUNT_GUNMAN_STATUS_KIND_SHOOT);
    lib::L2CValue::L2CValue(aLStack368,false);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::~L2CValue(aLStack368);
    this = aLStack352;
    goto LAB_7100032648;
  }
  lib::L2CValue::L2CValue(aLStack80,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  fVar9 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar9);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack144,0xc80cb7cb2);
  lib::L2CValue::L2CValue(aLStack160,0xe137ead63);
  uVar4 = lib::L2CValue::as_integer(aLStack144);
  uVar6 = lib::L2CValue::as_integer(aLStack160);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_2->moduleAccessor,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack80,fVar9);
  lib::L2CValue::operator-(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  uVar4 = lib::L2CValue::operator<(aLStack96,aLStack112);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CValue::L2CValue(aLStack160,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    fVar9 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(param_2->moduleAccessor,iVar3)
    ;
    lib::L2CValue::L2CValue(aLStack144,fVar9);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack80);
    lib::L2CAgent::push_lua_stack(param_2,aLStack144);
    lib::L2CAgent::push_lua_stack(param_2,aLStack112);
    app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack80);
    lib::L2CAgent::push_lua_stack(param_2,aLStack144);
    lib::L2CAgent::push_lua_stack(param_2,aLStack160);
    app::sv_kinetic_energy::set_accel(param_2->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,0xc80cb7cb2);
  lib::L2CValue::L2CValue(aLStack160,0xcd30bdd33);
  uVar4 = lib::L2CValue::as_integer(aLStack80);
  uVar6 = lib::L2CValue::as_integer(aLStack160);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_2->moduleAccessor,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack144,fVar9);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack160,aLStack144);
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  uVar4 = lib::L2CValue::operator<(aLStack160,aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack176);
LAB_7100032938:
    lib::L2CValue::L2CValue(param_1,0);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    return;
  }
  lib::L2CValue::L2CValue
            (aLStack208,_WEAPON_DUCKHUNT_GUNMAN_STATUS_COMMON_WORK_FLAG_VISIBILITY_CHANGED);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack192,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack192);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack176);
  if ((bVar1 & 1U) != 0) goto LAB_7100032938;
  lib::L2CValue::L2CValue
            (aLStack80,_WEAPON_DUCKHUNT_GUNMAN_STATUS_COMMON_WORK_FLAG_VISIBILITY_CHANGED);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_KIND);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack176,iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_DUCKHUNT_GUNMAN_KIND_HIGE);
  uVar4 = lib::L2CValue::operator==(aLStack80,aLStack176);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_DUCKHUNT_GUNMAN_KIND_NOPPO);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack176);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,0x4bf28cd64);
      lib::L2CValue::L2CValue(aLStack192,0xc04f57101);
      lVar7 = lib::L2CValue::as_integer(aLStack80);
      lVar8 = lib::L2CValue::as_integer(aLStack192);
      app::lua_bind::VisibilityModule__set_int64_impl(param_2->moduleAccessor,lVar7,lVar8);
      goto LAB_7100032c34;
    }
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_DUCKHUNT_GUNMAN_KIND_KUROFUKU);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack176);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,0x4bf28cd64);
      lib::L2CValue::L2CValue(aLStack192,0xf14d7d747);
      lVar7 = lib::L2CValue::as_integer(aLStack80);
      lVar8 = lib::L2CValue::as_integer(aLStack192);
      app::lua_bind::VisibilityModule__set_int64_impl(param_2->moduleAccessor,lVar7,lVar8);
      goto LAB_7100032c34;
    }
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_DUCKHUNT_GUNMAN_KIND_SONBURERO);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack176);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,0x4bf28cd64);
      lib::L2CValue::L2CValue(aLStack192,0xfa9cd55e3);
      lVar7 = lib::L2CValue::as_integer(aLStack80);
      lVar8 = lib::L2CValue::as_integer(aLStack192);
      app::lua_bind::VisibilityModule__set_int64_impl(param_2->moduleAccessor,lVar7,lVar8);
      goto LAB_7100032c34;
    }
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_DUCKHUNT_GUNMAN_KIND_BOSS);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack176);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,0x4bf28cd64);
      lib::L2CValue::L2CValue(aLStack192,0xbc122cfec);
      lVar7 = lib::L2CValue::as_integer(aLStack80);
      lVar8 = lib::L2CValue::as_integer(aLStack192);
      app::lua_bind::VisibilityModule__set_int64_impl(param_2->moduleAccessor,lVar7,lVar8);
      goto LAB_7100032c34;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0x4bf28cd64);
    lib::L2CValue::L2CValue(aLStack192,0xb28290620);
    lVar7 = lib::L2CValue::as_integer(aLStack80);
    lVar8 = lib::L2CValue::as_integer(aLStack192);
    app::lua_bind::VisibilityModule__set_int64_impl(param_2->moduleAccessor,lVar7,lVar8);
LAB_7100032c34:
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack112);
  this = aLStack96;
LAB_7100032648:
  lib::L2CValue::~L2CValue(this);
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

