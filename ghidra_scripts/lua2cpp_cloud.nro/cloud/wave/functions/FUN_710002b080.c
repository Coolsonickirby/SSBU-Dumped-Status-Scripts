
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002b080(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  float *pfVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  undefined8 local_100;
  ulong uStack248;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined8 auStack96 [2];
  
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,0xe);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,1.0);
  uVar4 = lib::L2CValue::operator<((L2CValue *)&local_100,pLVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  if ((uVar4 & 1) == 0) goto LAB_710002b1d8;
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)auStack96,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,0);
    uVar4 = lib::L2CValue::operator<=((L2CValue *)auStack96,(L2CValue *)&local_100);
    lib::L2CValue::~L2CValue((L2CValue *)&local_100);
    lib::L2CValue::~L2CValue((L2CValue *)auStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_100,0x199c462b5d);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_100);
      app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      lib::L2CValue::~L2CValue(aLStack128);
      goto LAB_710002b1d0;
    }
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator==(pLVar3,(L2CValue *)&local_100);
    lib::L2CValue::~L2CValue((L2CValue *)&local_100);
    if ((uVar4 & 1) == 0) goto LAB_710002b1d8;
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_100,_WEAPON_CLOUD_WAVE_INSTANCE_WORK_ID_FLOAT_GROUND_ANGLE);
    pLVar3 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_100);
    fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,(int)pLVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack96,fVar8);
    lib::L2CValue::~L2CValue((L2CValue *)&local_100);
    lib::L2CAgent::math_rad((L2CAgent *)auStack96,pLVar3);
    lib::L2CAgent::math_abs((L2CAgent *)auStack96,pLVar3);
    lib::L2CValue::L2CValue(aLStack160,0xa68069fbe);
    lib::L2CValue::L2CValue(aLStack176,0xb02d79a4b);
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    uVar6 = lib::L2CValue::as_integer(aLStack176);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_2->moduleAccessor,uVar4,uVar6);
    lib::L2CValue::L2CValue(aLStack144,fVar8);
    uVar4 = lib::L2CValue::operator<((L2CValue *)&local_100,aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue((L2CValue *)&local_100);
    if ((uVar4 & 1) != 0) {
      fVar8 = (float)app::lua_bind::PostureModule__rot_x_impl(param_2->moduleAccessor,0);
      lib::L2CValue::L2CValue(aLStack144,fVar8);
      lib::L2CValue::L2CValue((L2CValue *)&local_100,0xa68069fbe);
      lib::L2CValue::L2CValue(aLStack176,0x100112355c);
      uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_100);
      uVar6 = lib::L2CValue::as_integer(aLStack176);
      iVar2 = app::lua_bind::WorkModule__get_param_int_impl(param_2->moduleAccessor,uVar4,uVar6);
      lib::L2CValue::L2CValue(aLStack160,iVar2);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue((L2CValue *)&local_100);
      lib::L2CValue::L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack192);
      lib::L2CValue::L2CValue(aLStack208);
      pfVar7 = (float *)app::lua_bind::PostureModule__rot_impl(param_2->moduleAccessor,0);
      lib::L2CValue::L2CValue((L2CValue *)&local_100,*pfVar7);
      lib::L2CValue::L2CValue(aLStack240,pfVar7[1]);
      lib::L2CValue::L2CValue(aLStack224,pfVar7[2]);
      lib::L2CValue::operator=(aLStack176,(L2CValue *)&local_100);
      lib::L2CValue::operator=(aLStack192,aLStack240);
      lib::L2CValue::operator=(aLStack208,aLStack224);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue((L2CValue *)&local_100);
      lib::L2CValue::operator-((L2CValue *)auStack96,aLStack144);
      lib::L2CValue::operator/(aLStack304,aLStack160);
      lib::L2CValue::operator+(aLStack176,aLStack288);
      uVar9 = lib::L2CValue::as_number(aLStack272);
      uVar10 = lib::L2CValue::as_number(aLStack192);
      uVar11 = lib::L2CValue::as_number(aLStack208);
      local_100 = CONCAT44(uVar10,uVar9);
      uStack248 = (ulong)uVar11;
      app::lua_bind::PostureModule__set_rot_impl(param_2->moduleAccessor,(Vector3f *)&local_100,0);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_100,0xa68069fbe);
    lib::L2CValue::L2CValue(aLStack160,0xc6018d993);
    pLVar3 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_100);
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_2->moduleAccessor,(ulong)pLVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack144,fVar8);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue((L2CValue *)&local_100);
    lib::L2CAgent::math_sin((L2CAgent *)aLStack112,pLVar3);
    lib::L2CValue::operator-((L2CValue *)&local_100);
    lib::L2CValue::~L2CValue((L2CValue *)&local_100);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,0.0);
    puVar5 = &local_100;
    uVar4 = lib::L2CValue::operator<(aLStack160,(L2CValue *)puVar5);
    lib::L2CValue::~L2CValue((L2CValue *)&local_100);
    if ((uVar4 & 1) != 0) {
      lib::L2CAgent::math_cos((L2CAgent *)aLStack112,(L2CValue *)puVar5);
      lib::L2CValue::operator*(aLStack144,aLStack176);
      lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_100);
      lib::L2CValue::~L2CValue((L2CValue *)&local_100);
      lib::L2CValue::~L2CValue(aLStack176);
    }
    fVar8 = (float)app::lua_bind::PostureModule__lr_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,fVar8);
    lib::L2CValue::L2CValue(aLStack176,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CValue::operator*(aLStack144,(L2CValue *)&local_100);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack176);
    lib::L2CAgent::push_lua_stack(param_2,aLStack192);
    lib::L2CAgent::push_lua_stack(param_2,aLStack208);
    app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue((L2CValue *)&local_100);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack112);
    puVar5 = auStack96;
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_100,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_100);
    app::lua_bind::WorkModule__dec_int_impl(param_2->moduleAccessor,iVar2);
LAB_710002b1d0:
    puVar5 = &local_100;
  }
  lib::L2CValue::~L2CValue((L2CValue *)puVar5);
LAB_710002b1d8:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

