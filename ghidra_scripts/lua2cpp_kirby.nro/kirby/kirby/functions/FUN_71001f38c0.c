
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71001f38c0(L2CAgent *param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  undefined auStack304 [32];
  L2CValue aLStack272 [16];
  undefined auStack256 [32];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
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
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack256,0);
  lib::L2CValue::L2CValue(aLStack272,0);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GANON_STATUS_WORK_ID_FLAG_GANON_PUNCH_DIR_DECIDE);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar3 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GANON_STATUS_WORK_ID_FLAG_GANON_PUNCH_DIR_DECIDE_END)
    ;
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
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0x1b);
      lib::L2CValue::L2CValue((L2CValue *)auStack304,pLVar5);
      lib::L2CValue::L2CValue(aLStack80,0);
      lib::L2CValue::L2CValue(aLStack96,0);
      lib::L2CValue::L2CValue(aLStack112,0);
      lib::L2CValue::L2CValue((L2CValue *)(auStack304 + 0x10),0);
      lib::L2CValue::L2CValue(aLStack128,0);
      lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),0);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,0.125);
      lib::L2CValue::operator=(aLStack112,(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,0.7);
      lib::L2CValue::operator=(aLStack80,(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,0x2d);
      puVar7 = &local_40;
      lib::L2CValue::operator=((L2CValue *)(auStack160 + 0x10),(L2CValue *)puVar7);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CAgent::math_abs((L2CAgent *)auStack304,(L2CValue *)puVar7);
      lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      uVar6 = lib::L2CValue::operator<(aLStack112,aLStack128);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::operator=(aLStack128,aLStack112);
      }
      lib::L2CValue::operator-(aLStack128,aLStack80);
      lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
      uVar6 = lib::L2CValue::operator<(aLStack128,(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
        lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_40);
        lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
      uVar6 = lib::L2CValue::operator<((L2CValue *)auStack304,(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::operator-(aLStack128);
        lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_40);
        lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      }
      lib::L2CValue::operator-(aLStack112,aLStack80);
      lib::L2CValue::operator=(aLStack96,(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::operator*(aLStack128,(L2CValue *)(auStack160 + 0x10));
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
      lib::L2CValue::operator=((L2CValue *)auStack256,(L2CValue *)(auStack304 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)auStack304);
      fVar8 = (float)app::lua_bind::PostureModule__lr_impl(param_1->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar8);
      lib::L2CValue::operator=(aLStack224,(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,0.8);
      puVar7 = &local_40;
      lib::L2CValue::operator=(aLStack272,(L2CValue *)puVar7);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CAgent::math_cos((L2CAgent *)auStack256,(L2CValue *)puVar7);
      lib::L2CValue::operator*(aLStack96,aLStack272);
      lib::L2CValue::operator*(aLStack80,aLStack224);
      lib::L2CValue::operator=((L2CValue *)(auStack256 + 0x10),(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
      lib::L2CValue::operator=(aLStack192,(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_40);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)(auStack256 + 0x10));
      lib::L2CAgent::push_lua_stack(param_1,aLStack192);
      app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_40);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)(auStack256 + 0x10));
      lib::L2CAgent::push_lua_stack(param_1,aLStack192);
      app::sv_kinetic_energy::set_limit_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_40);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)(auStack256 + 0x10));
      lib::L2CAgent::push_lua_stack(param_1,aLStack192);
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
      lib::L2CAgent::math_sin((L2CAgent *)auStack256,pLVar5);
      lib::L2CValue::operator*(aLStack80,aLStack272);
      lib::L2CValue::operator=(aLStack208,(L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&local_40);
      lib::L2CAgent::push_lua_stack(param_1,aLStack208);
      app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_40,_FIGHTER_GANON_STATUS_WORK_ID_FLAG_GANON_PUNCH_DIR_DECIDE_END
                );
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_40);
      app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    }
  }
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue((L2CValue *)auStack256);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack256 + 0x10));
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GANON_STATUS_WORK_ID_INT_GANON_PUNCH_AIR_PHASE);
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
      if ((uVar6 & 1) == 0) goto LAB_71001f4158;
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GANON_STATUS_WORK_ID_FLAG_GANON_PUNCH_NORMAL_FALL);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      lib::L2CValue::operator!(aLStack80);
      bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_40);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar3 & 1U) == 0) goto LAB_71001f4158;
      lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_KINETIC_TYPE_FALL);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_40);
      app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_40,_FIGHTER_GANON_STATUS_WORK_ID_FLAG_GANON_PUNCH_NORMAL_FALL);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_40);
      app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar4);
      goto LAB_71001f40a4;
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0.92);
    lib::L2CValue::operator=(aLStack336,(L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::L2CValue(aLStack80,1.0);
    uVar9 = lib::L2CValue::as_number(aLStack336);
    uVar10 = lib::L2CValue::as_number(aLStack336);
    uVar11 = lib::L2CValue::as_number(aLStack80);
    local_40 = CONCAT44(uVar10,uVar9);
    uStack56 = (ulong)uVar11;
    app::lua_bind::KineticModule__mul_speed_impl(param_1->moduleAccessor,(Vector3f *)&local_40,-1);
    lVar1 = -0x40;
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GANON_STATUS_WORK_ID_FLAG_GANON_PUNCH_BRAKE_FALL);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    lib::L2CValue::operator!(aLStack80);
    bVar3 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar3 & 1U) == 0) goto LAB_71001f4158;
    lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_40);
    app::lua_bind::KineticModule__change_kinetic_impl(param_1->moduleAccessor,iVar4);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_40,_FIGHTER_GANON_STATUS_WORK_ID_FLAG_GANON_PUNCH_BRAKE_FALL);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_40);
    app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar4);
LAB_71001f40a4:
    lVar1 = -0x30;
  }
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
LAB_71001f4158:
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue(aLStack320);
  return;
}

