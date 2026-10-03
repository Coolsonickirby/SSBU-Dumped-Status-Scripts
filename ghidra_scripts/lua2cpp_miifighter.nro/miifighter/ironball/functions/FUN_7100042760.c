
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100042760(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  HitStatus HVar6;
  AttackSetOffKind AVar7;
  ulong uVar8;
  ulong uVar9;
  L2CValue *this;
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
  L2CValue aLStack80 [16];
  
  bVar2 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    lib::L2CValue::L2CValue(aLStack112,0);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    iVar5 = lib::L2CValue::as_integer(aLStack112);
    bVar3 = app::lua_bind::WorkModule__count_down_int_impl(param_2->moduleAccessor,iVar4,iVar5);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue
                (aLStack96,_WEAPON_MIIFIGHTER_IRONBALL_INSTANCE_WORK_ID_FLAG_FALL_MAX_SPEED);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack96,_WEAPON_MIIFIGHTER_IRONBALL_INSTANCE_WORK_ID_INT_FALL_MAX_SPEED_COUNT);
        lib::L2CValue::L2CValue(aLStack112,0);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        iVar5 = lib::L2CValue::as_integer(aLStack112);
        bVar3 = app::lua_bind::WorkModule__count_down_int_impl(param_2->moduleAccessor,iVar4,iVar5);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((bVar2 & 1U) != 0) goto LAB_7100042804;
      }
      lib::L2CValue::L2CValue
                (aLStack96,_WEAPON_MIIFIGHTER_IRONBALL_INSTANCE_WORK_ID_FLAG_DAMAGE_REFLECTED);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      bVar3 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar3 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar2 & 1U) == 0) goto LAB_7100042f9c;
      fVar10 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(param_2->moduleAccessor,-1)
      ;
      lib::L2CValue::L2CValue(aLStack80,fVar10);
      lib::L2CValue::L2CValue(aLStack128,0xe06ed07db);
      lib::L2CValue::L2CValue(aLStack144,0x1398e21cf1);
      uVar8 = lib::L2CValue::as_integer(aLStack128);
      uVar9 = lib::L2CValue::as_integer(aLStack144);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (param_2->moduleAccessor,uVar8,uVar9);
      lib::L2CValue::L2CValue(aLStack112,fVar10);
      lib::L2CValue::operator-(aLStack112);
      uVar8 = lib::L2CValue::operator<=(aLStack80,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar8 & 1) == 0) goto LAB_7100042f9c;
    }
LAB_7100042804:
    FUN_7100043760(param_2);
    goto LAB_7100042f9c;
  }
  bVar3 = app::lua_bind::StopModule__is_stop_impl(param_2->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar8 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar8 & 1) == 0) goto LAB_7100042f9c;
  iVar4 = app::lua_bind::GroundModule__get_touch_flag_impl(param_2->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,iVar4);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar8 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar8 & 1) == 0) {
    fVar10 = (float)app::lua_bind::PostureModule__lr_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,fVar10);
    lib::L2CValue::L2CValue(aLStack80,_GROUND_TOUCH_FLAG_LEFT_SIDE);
    lib::L2CValue::operator&(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack128);
    if ((bVar2 & 1U) == 0) {
LAB_7100042b0c:
      lib::L2CValue::L2CValue(aLStack80,_GROUND_TOUCH_FLAG_RIGHT_SIDE);
      lib::L2CValue::operator&(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack144);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,-1.0);
        uVar8 = lib::L2CValue::operator==(aLStack112,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
        if ((uVar8 & 1) != 0) goto LAB_7100042b78;
      }
      lib::L2CValue::L2CValue(aLStack128,true);
      iVar4 = app::lua_bind::StatusModule__situation_kind_impl(param_2->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack144,iVar4);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar8 = lib::L2CValue::operator==(aLStack144,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,aLStack80);
        fVar10 = (float)app::sv_kinetic_energy::get_speed_x(param_2->luaStateAgent);
        lib::L2CValue::L2CValue(aLStack144,fVar10);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_MIIFIGHTER_IRONBALL_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,aLStack80);
        fVar10 = (float)app::sv_kinetic_energy::get_speed_y(param_2->luaStateAgent);
        lib::L2CValue::L2CValue(aLStack160,fVar10);
        lib::L2CValue::~L2CValue(aLStack80);
        fVar10 = (float)lib::L2CValue::as_number(aLStack144);
        fVar11 = (float)lib::L2CValue::as_number(aLStack160);
        fVar10 = (float)app::sv_math::vec2_length(fVar10,fVar11);
        lib::L2CValue::L2CValue(aLStack80,fVar10);
        lib::L2CValue::L2CValue(aLStack192,0xe06ed07db);
        lib::L2CValue::L2CValue(aLStack208,0xaea908688);
        uVar8 = lib::L2CValue::as_integer(aLStack192);
        uVar9 = lib::L2CValue::as_integer(aLStack208);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (param_2->moduleAccessor,uVar8,uVar9);
        lib::L2CValue::L2CValue(aLStack176,fVar10);
        uVar8 = lib::L2CValue::operator<=(aLStack80,aLStack176);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar8 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
          lib::L2CValue::L2CValue(aLStack176,0.0);
          lib::L2CValue::L2CValue(aLStack192,0.0);
          lib::L2CAgent::clear_lua_stack(param_2);
          lib::L2CAgent::push_lua_stack(param_2,aLStack80);
          lib::L2CAgent::push_lua_stack(param_2,aLStack176);
          lib::L2CAgent::push_lua_stack(param_2,aLStack192);
          app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
          lib::L2CValue::~L2CValue(aLStack192);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,_WEAPON_MIIFIGHTER_IRONBALL_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CValue::L2CValue(aLStack176,0.0);
          lib::L2CAgent::clear_lua_stack(param_2);
          lib::L2CAgent::push_lua_stack(param_2,aLStack80);
          lib::L2CAgent::push_lua_stack(param_2,aLStack176);
          app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,false);
          lib::L2CValue::operator=(aLStack128,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
        }
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack144);
      }
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack128);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,0x18b78d41a0);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,aLStack80);
        app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
        lib::L2CAgent::pop_lua_stack(param_2,1);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_MIIFIGHTER_IRONBALL_INSTANCE_WORK_ID_FLAG_TOUCH);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(param_2->moduleAccessor,iVar4);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue
                  (aLStack160,_WEAPON_MIIFIGHTER_IRONBALL_INSTANCE_WORK_ID_FLAG_DAMAGE_REFLECTED);
        iVar4 = lib::L2CValue::as_integer(aLStack160);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack144,(bool)(bVar3 & 1));
        lib::L2CValue::operator!(aLStack144);
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack160);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_HIT_STATUS_NORMAL);
          HVar6 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::HitModule__set_whole_impl(param_2->moduleAccessor,HVar6,0);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,0);
          lib::L2CValue::L2CValue(aLStack144,_ATTACK_SETOFF_KIND_OFF);
          iVar4 = lib::L2CValue::as_integer(aLStack80);
          AVar7 = lib::L2CValue::as_integer(aLStack144);
          app::lua_bind::AttackModule__set_set_off_impl(param_2->moduleAccessor,iVar4,AVar7);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack80);
        }
      }
      this = aLStack128;
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,1.0);
      uVar8 = lib::L2CValue::operator==(aLStack112,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar8 & 1) == 0) goto LAB_7100042b0c;
      lib::L2CValue::~L2CValue(aLStack128);
LAB_7100042b78:
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_MIIFIGHTER_IRONBALL_INSTANCE_WORK_ID_FLAG_TOUCH);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__off_flag_impl(param_2->moduleAccessor,iVar4);
      this = aLStack80;
    }
    lib::L2CValue::~L2CValue(this);
    lVar1 = -0x60;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_MIIFIGHTER_IRONBALL_INSTANCE_WORK_ID_FLAG_TOUCH);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(param_2->moduleAccessor,iVar4);
    lVar1 = -0x40;
  }
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  lib::L2CValue::~L2CValue(aLStack96);
LAB_7100042f9c:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

