
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000171b0(L2CAgent *param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  undefined auStack304 [32];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  undefined auStack208 [32];
  L2CValue aLStack176 [16];
  undefined auStack160 [32];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack320,0);
  lib::L2CValue::L2CValue(aLStack336,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack208 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue(aLStack240,0);
  lib::L2CValue::L2CValue(aLStack256,0);
  lib::L2CValue::L2CValue(aLStack272,0);
  lib::L2CValue::L2CValue
            (aLStack80,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_FLAG_BAKURETU_KICK_DIR_DECIDE);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar3 & 1U) != 0) {
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_FLAG_BAKURETU_KICK_DIR_DECIDE_END);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    lib::L2CValue::operator!(aLStack80);
    bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_KINETIC_TYPE_FALL);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_40);
      app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_40);
      app::lua_bind::KineticModule__unable_energy_impl(param_1->moduleAccessor,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0x1b);
      lib::L2CValue::L2CValue((L2CValue *)auStack304,pLVar5);
      lib::L2CValue::L2CValue(aLStack80,0);
      lib::L2CValue::L2CValue((L2CValue *)(auStack304 + 0x10),0);
      lib::L2CValue::L2CValue(aLStack96,0);
      lib::L2CValue::L2CValue(aLStack112,0);
      lib::L2CValue::L2CValue(aLStack128,0);
      lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),0);
      lib::L2CValue::L2CValue((L2CValue *)auStack160,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack176,0xe2595a2a9);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack160);
      uVar7 = lib::L2CValue::as_integer(aLStack176);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_1->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar9);
      lib::L2CValue::operator=((L2CValue *)(auStack160 + 0x10),(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue((L2CValue *)auStack160);
      lib::L2CValue::L2CValue((L2CValue *)auStack160,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack176,0xe19989df0);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack160);
      uVar7 = lib::L2CValue::as_integer(aLStack176);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_1->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar9);
      lib::L2CValue::operator=(aLStack112,(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue((L2CValue *)auStack160);
      lib::L2CValue::L2CValue((L2CValue *)auStack160,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack176,0x802b3da19);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack160);
      uVar7 = lib::L2CValue::as_integer(aLStack176);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_1->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar9);
      puVar8 = &local_40;
      lib::L2CValue::operator=(aLStack128,(L2CValue *)puVar8);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue((L2CValue *)auStack160);
      lib::L2CAgent::math_abs((L2CAgent *)auStack304,(L2CValue *)puVar8);
      lib::L2CValue::operator=(aLStack80,(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      uVar6 = lib::L2CValue::operator<((L2CValue *)(auStack160 + 0x10),aLStack80);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::operator=(aLStack80,(L2CValue *)(auStack160 + 0x10));
      }
      lib::L2CValue::operator-(aLStack80,aLStack112);
      lib::L2CValue::operator=(aLStack80,(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
      uVar6 = lib::L2CValue::operator<(aLStack80,(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
        lib::L2CValue::operator=(aLStack80,(L2CValue *)&local_40);
        lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
      uVar6 = lib::L2CValue::operator<((L2CValue *)auStack304,(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::operator-(aLStack80);
        lib::L2CValue::operator=(aLStack80,(L2CValue *)&local_40);
        lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      }
      lib::L2CValue::operator-((L2CValue *)(auStack160 + 0x10),aLStack112);
      lib::L2CValue::operator=(aLStack96,(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::operator*(aLStack80,aLStack128);
      pLVar5 = aLStack96;
      lib::L2CValue::operator/(aLStack176,pLVar5);
      lib::L2CAgent::math_rad((L2CAgent *)auStack160,pLVar5);
      lib::L2CValue::operator=((L2CValue *)(auStack304 + 0x10),(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)auStack160);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::operator=((L2CValue *)auStack208,(L2CValue *)(auStack304 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)auStack304);
      fVar9 = (float)app::lua_bind::PostureModule__lr_impl(param_1->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar9);
      lib::L2CValue::operator=((L2CValue *)(auStack208 + 0x10),(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack96,0x85fcea9f5);
      uVar6 = lib::L2CValue::as_integer(aLStack80);
      uVar7 = lib::L2CValue::as_integer(aLStack96);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_1->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar9);
      puVar8 = &local_40;
      lib::L2CValue::operator=(aLStack272,(L2CValue *)puVar8);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CAgent::math_cos((L2CAgent *)auStack208,(L2CValue *)puVar8);
      lib::L2CValue::operator*(aLStack96,aLStack272);
      lib::L2CValue::operator*(aLStack80,(L2CValue *)(auStack208 + 0x10));
      lib::L2CValue::operator=(aLStack256,(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
      lib::L2CValue::operator=(aLStack224,(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_40);
      lib::L2CAgent::push_lua_stack(param_1,aLStack256);
      lib::L2CAgent::push_lua_stack(param_1,aLStack224);
      app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_40);
      lib::L2CAgent::push_lua_stack(param_1,aLStack256);
      lib::L2CAgent::push_lua_stack(param_1,aLStack224);
      app::sv_kinetic_energy::set_limit_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_40);
      lib::L2CAgent::push_lua_stack(param_1,aLStack256);
      lib::L2CAgent::push_lua_stack(param_1,aLStack224);
      app::sv_kinetic_energy::set_stable_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_40);
      lib::L2CAgent::push_lua_stack(param_1,aLStack80);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      app::sv_kinetic_energy::set_brake(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      pLVar5 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_40);
      app::lua_bind::KineticModule__enable_energy_impl(param_1->moduleAccessor,(int)pLVar5);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CAgent::math_sin((L2CAgent *)auStack208,pLVar5);
      lib::L2CValue::operator*(aLStack80,aLStack272);
      lib::L2CValue::operator=(aLStack240,(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_40);
      lib::L2CAgent::push_lua_stack(param_1,aLStack240);
      app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_40,
                 _FIGHTER_MIIFIGHTER_STATUS_WORK_ID_FLAG_BAKURETU_KICK_DIR_DECIDE_END);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_40);
      app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    }
  }
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue((L2CValue *)auStack208);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack208 + 0x10));
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_INT_BAKURETU_KICK_AIR_PHASE);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,iVar4);
  lib::L2CValue::operator=(aLStack320,(L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0);
  uVar6 = lib::L2CValue::operator==(aLStack320,(L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_40,1);
    uVar6 = lib::L2CValue::operator==(aLStack320,(L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_40,2);
      uVar6 = lib::L2CValue::operator==(aLStack320,(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      if ((uVar6 & 1) == 0) goto LAB_7100017c1c;
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_FLAG_BAKURETU_KICK_NORMAL_FALL);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      lib::L2CValue::operator!(aLStack80);
      bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar3 & 1U) == 0) goto LAB_7100017c1c;
      lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_KINETIC_TYPE_FALL);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_40);
      app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_40,
                 _FIGHTER_MIIFIGHTER_STATUS_WORK_ID_FLAG_BAKURETU_KICK_NORMAL_FALL);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_40);
      app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar4);
      goto LAB_7100017b14;
    }
    lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack96,0xb8f94d4c8);
    uVar6 = lib::L2CValue::as_integer(aLStack80);
    uVar7 = lib::L2CValue::as_integer(aLStack96);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar6,uVar7);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar9);
    lib::L2CValue::operator=(aLStack336,(L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,1.0);
    uVar10 = lib::L2CValue::as_number(aLStack336);
    uVar11 = lib::L2CValue::as_number(aLStack336);
    uVar12 = lib::L2CValue::as_number(aLStack80);
    local_40 = CONCAT44(uVar11,uVar10);
    uStack56 = (ulong)uVar12;
    app::lua_bind::KineticModule__mul_speed_impl(param_1->moduleAccessor,(Vector3f *)&local_40,-1);
    lVar1 = -0x40;
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_FLAG_BAKURETU_KICK_BRAKE_FALL);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    lib::L2CValue::operator!(aLStack80);
    bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar3 & 1U) == 0) goto LAB_7100017c1c;
    lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_40);
    app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar4);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_40,
               _FIGHTER_MIIFIGHTER_STATUS_WORK_ID_FLAG_BAKURETU_KICK_BRAKE_FALL);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_40);
    app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar4);
LAB_7100017b14:
    lVar1 = -0x30;
  }
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
LAB_7100017c1c:
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  return;
}

