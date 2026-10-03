
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002e300(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  Hash40 HVar4;
  void ***pppvVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  long lVar11;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  void **local_60;
  lua_State *plStack88;
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__dec_int_impl(param_2->moduleAccessor,iVar2);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
  uVar3 = lib::L2CValue::operator<=((L2CValue *)&local_60,aLStack112);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_YOSHI_TAMAGO_INSTANCE_WORK_ID_FLOAT_ROT);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack128,fVar6);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack160,_WEAPON_YOSHI_TAMAGO_INSTANCE_WORK_ID_FLOAT_ROT_SPEED);
      iVar2 = lib::L2CValue::as_integer(aLStack160);
      fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack144,fVar6);
      lib::L2CValue::operator-(aLStack128,aLStack144);
      lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      lib::L2CValue::operator+(aLStack128,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_YOSHI_TAMAGO_INSTANCE_WORK_ID_FLOAT_ROT)
      ;
      fVar6 = (float)lib::L2CValue::as_number(aLStack144);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__set_float_impl(param_2->moduleAccessor,fVar6,iVar2);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue(aLStack144);
    }
    lib::L2CValue::L2CValue(aLStack144,0x31d39a761);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    HVar4 = lib::L2CValue::as_hash(aLStack144);
    uVar3 = lib::L2CValue::as_number(aLStack128);
    lVar11 = lib::L2CValue::as_number(aLStack160);
    uVar7 = lib::L2CValue::as_number(aLStack176);
    local_60 = (void **)(uVar3 & 0xffffffff | lVar11 << 0x20);
    plStack88 = (lua_State *)(ulong)uVar7;
    app::lua_bind::ModelModule__set_joint_rotate_impl
              (param_2->moduleAccessor,HVar4,(Vector3f *)&local_60,0,0);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
  uVar3 = lib::L2CValue::operator<=((L2CValue *)&local_60,aLStack112);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_60);
    fVar6 = (float)app::sv_kinetic_energy::get_speed_x(param_2->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack128,fVar6);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CAgent::clear_lua_stack(param_2);
    pppvVar5 = &local_60;
    lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)pppvVar5);
    fVar6 = (float)app::sv_kinetic_energy::get_speed_y(param_2->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack144,fVar6);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    fVar6 = (float)lib::L2CValue::as_number(aLStack128);
    fVar8 = (float)lib::L2CValue::as_number(aLStack176);
    fVar9 = (float)lib::L2CValue::as_number(aLStack128);
    fVar10 = (float)lib::L2CValue::as_number(aLStack144);
    fVar6 = (float)app::sv_math::vec2_angle(fVar6,fVar8,fVar9,fVar10);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar6);
    lib::L2CAgent::math_deg((L2CAgent *)&local_60,(L2CValue *)pppvVar5);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue(aLStack176);
    fVar6 = (float)app::lua_bind::PostureModule__lr_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack192,fVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,90.0);
    lib::L2CValue::operator*((L2CValue *)&local_60,aLStack192);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,-1e-05);
    uVar3 = lib::L2CValue::operator<((L2CValue *)&local_60,aLStack128);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,1e-05);
      uVar3 = lib::L2CValue::operator<(aLStack128,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,90.0);
        lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
        uVar3 = lib::L2CValue::operator<(aLStack144,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        if ((uVar3 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,-1.0);
          lib::L2CValue::operator*(aLStack160,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          lib::L2CValue::operator=(aLStack160,aLStack192);
          lib::L2CValue::~L2CValue(aLStack192);
        }
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    uVar3 = lib::L2CValue::operator<((L2CValue *)&local_60,aLStack144);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,-1.0);
      lib::L2CValue::operator*(aLStack160,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::operator=(aLStack160,aLStack192);
      lib::L2CValue::~L2CValue(aLStack192);
    }
    lib::L2CValue::L2CValue(aLStack192,0x31ed91fca);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    HVar4 = lib::L2CValue::as_hash(aLStack192);
    uVar3 = lib::L2CValue::as_number(aLStack160);
    lVar11 = lib::L2CValue::as_number(aLStack176);
    uVar7 = lib::L2CValue::as_number(aLStack208);
    local_60 = (void **)(uVar3 & 0xffffffff | lVar11 << 0x20);
    plStack88 = (lua_State *)(ulong)uVar7;
    app::lua_bind::ModelModule__set_joint_rotate_impl
              (param_2->moduleAccessor,HVar4,(Vector3f *)&local_60,0,0);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

