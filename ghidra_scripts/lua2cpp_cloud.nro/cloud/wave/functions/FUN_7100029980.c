
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100029980(L2CAgent *param_1,L2CValue *param_2)

{
  byte bVar1;
  byte bVar2;
  GroundCorrectKind GVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  ulong uVar7;
  Hash40 HVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
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
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),0);
  lib::L2CValue::L2CValue((L2CValue *)auStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),0);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator==(pLVar5,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_AIR);
    GVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl(param_1->moduleAccessor,GVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    pLVar5 = (L2CValue *)0x0;
    fVar10 = (float)app::lua_bind::PostureModule__rot_x_impl(param_1->moduleAccessor,0);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,fVar10);
    lib::L2CAgent::math_rad((L2CAgent *)auStack256,pLVar5);
    lib::L2CValue::operator=((L2CValue *)auStack160,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    fVar10 = (float)app::lua_bind::PostureModule__lr_impl(param_1->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,fVar10);
    lib::L2CValue::operator=(aLStack128,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,0xa68069fbe);
    lib::L2CValue::L2CValue(aLStack272,0x9be3d2815);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack256);
    uVar7 = lib::L2CValue::as_integer(aLStack272);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (param_1->moduleAccessor,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack96,fVar10);
    pLVar5 = aLStack96;
    lib::L2CValue::operator=((L2CValue *)(auStack160 + 0x10),pLVar5);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    lib::L2CAgent::math_cos((L2CAgent *)auStack160,pLVar5);
    lib::L2CValue::operator*((L2CValue *)auStack256,(L2CValue *)(auStack160 + 0x10));
    pLVar5 = aLStack96;
    lib::L2CValue::operator=(aLStack224,pLVar5);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    lib::L2CAgent::math_sin((L2CAgent *)auStack160,pLVar5);
    lib::L2CValue::operator-((L2CValue *)(auStack160 + 0x10));
    lib::L2CValue::operator*((L2CValue *)auStack256,aLStack272);
    lib::L2CValue::operator=(aLStack208,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CValue::operator*(aLStack224,aLStack128);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack96);
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack256);
    lib::L2CAgent::push_lua_stack(param_1,aLStack208);
    app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar6 = lib::L2CValue::operator==(param_2,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0xbfa56d1af);
      lib::L2CValue::L2CValue((L2CValue *)auStack256,0.0);
      lib::L2CValue::L2CValue(aLStack272,1.0);
      lib::L2CValue::L2CValue(aLStack288,false);
      HVar8 = lib::L2CValue::as_hash(aLStack96);
      fVar10 = (float)lib::L2CValue::as_number((L2CValue *)auStack256);
      fVar11 = (float)lib::L2CValue::as_number(aLStack272);
      bVar1 = lib::L2CValue::as_bool(aLStack288);
      app::lua_bind::MotionModule__change_motion_impl
                (param_1->moduleAccessor,HVar8,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue((L2CValue *)auStack256);
      pLVar5 = aLStack96;
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0xbfa56d1af);
      HVar8 = lib::L2CValue::as_hash(aLStack96);
      app::lua_bind::MotionModule__change_motion_force_inherit_frame_impl
                (param_1->moduleAccessor,HVar8,-1.0,1.0,0.0);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack272,_WEAPON_CLOUD_WAVE_INSTANCE_WORK_ID_FLAG_ATTACK_POWER_LOW);
      iVar4 = lib::L2CValue::as_integer(aLStack272);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)auStack256,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack96,true);
      uVar6 = lib::L2CValue::operator==((L2CValue *)auStack256,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue((L2CValue *)auStack256);
      lib::L2CValue::~L2CValue(aLStack272);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack256,0xa68069fbe);
        lib::L2CValue::L2CValue(aLStack272,0x1068f16974);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack256);
        uVar7 = lib::L2CValue::as_integer(aLStack272);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (param_1->moduleAccessor,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack96,fVar10);
        lib::L2CValue::operator=(aLStack112,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue((L2CValue *)auStack256);
        lib::L2CValue::L2CValue((L2CValue *)auStack256,0xa68069fbe);
        lib::L2CValue::L2CValue(aLStack272,0xb00dbe587);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack256);
        uVar7 = lib::L2CValue::as_integer(aLStack272);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (param_1->moduleAccessor,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack96,fVar10);
        lib::L2CValue::operator=(aLStack176,aLStack96);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)auStack256,0xa68069fbe);
        lib::L2CValue::L2CValue(aLStack272,0x1432769fa9);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack256);
        uVar7 = lib::L2CValue::as_integer(aLStack272);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (param_1->moduleAccessor,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack96,fVar10);
        lib::L2CValue::operator=(aLStack112,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue((L2CValue *)auStack256);
        lib::L2CValue::L2CValue((L2CValue *)auStack256,0xa68069fbe);
        lib::L2CValue::L2CValue(aLStack272,0xf6288e146);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack256);
        uVar7 = lib::L2CValue::as_integer(aLStack272);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (param_1->moduleAccessor,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack96,fVar10);
        lib::L2CValue::operator=(aLStack176,aLStack96);
      }
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack272);
      pLVar5 = (L2CValue *)auStack256;
    }
    lib::L2CValue::~L2CValue(pLVar5);
    lib::L2CValue::L2CValue(aLStack272,_WEAPON_INSTANCE_WORK_ID_INT_CUSTOMIZE_NO);
    iVar4 = lib::L2CValue::as_integer(aLStack272);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,iVar4);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar6 = lib::L2CValue::operator==((L2CValue *)auStack256,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    lib::L2CValue::~L2CValue(aLStack272);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0x17b924cfaf);
      lib::L2CValue::operator=((L2CValue *)(auStack256 + 0x10),aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0x17ab916041);
      lib::L2CValue::operator=(aLStack192,aLStack96);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0x14de07cfcd);
      lib::L2CValue::operator=((L2CValue *)(auStack256 + 0x10),aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0x14470e9e77);
      lib::L2CValue::operator=(aLStack192,aLStack96);
    }
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,true);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,true);
    HVar8 = lib::L2CValue::as_hash((L2CValue *)(auStack256 + 0x10));
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    bVar2 = lib::L2CValue::as_bool((L2CValue *)auStack256);
    app::lua_bind::EffectModule__kill_kind_impl
              (param_1->moduleAccessor,HVar8,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_MA_MSC_CMD_EFFECT_EFFECT_FOLLOW);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,0x31ed91fca);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    lib::L2CValue::L2CValue(aLStack368,0.0);
    lib::L2CValue::L2CValue(aLStack384,1.0);
    lib::L2CValue::L2CValue(aLStack400,false);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack96);
    lib::L2CAgent::push_lua_stack(param_1,aLStack192);
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack256);
    lib::L2CAgent::push_lua_stack(param_1,aLStack272);
    lib::L2CAgent::push_lua_stack(param_1,aLStack288);
    lib::L2CAgent::push_lua_stack(param_1,aLStack304);
    lib::L2CAgent::push_lua_stack(param_1,aLStack320);
    lib::L2CAgent::push_lua_stack(param_1,aLStack352);
    lib::L2CAgent::push_lua_stack(param_1,aLStack368);
    lib::L2CAgent::push_lua_stack(param_1,aLStack384);
    lib::L2CAgent::push_lua_stack(param_1,aLStack400);
    app::sv_module_access::effect(param_1->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_1,1);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_CLOUD_WAVE_INSTANCE_WORK_ID_INT_EFFECT_KIND);
    lVar9 = lib::L2CValue::as_integer(aLStack192);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int64_impl(param_1->moduleAccessor,lVar9,iVar4);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,GROUND_CORRECT_KIND_GROUND);
    GVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::GroundModule__correct_impl(param_1->moduleAccessor,GVar3);
    lib::L2CValue::~L2CValue(aLStack96);
    fVar10 = (float)app::lua_bind::PostureModule__lr_impl(param_1->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,fVar10);
    lib::L2CValue::operator=(aLStack128,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CValue::L2CValue(aLStack288,0xa68069fbe);
    lib::L2CValue::L2CValue(aLStack304,0xc6018d993);
    uVar6 = lib::L2CValue::as_integer(aLStack288);
    uVar7 = lib::L2CValue::as_integer(aLStack304);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (param_1->moduleAccessor,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack272,fVar10);
    lib::L2CValue::operator*(aLStack272,aLStack128);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack96);
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack256);
    lib::L2CAgent::push_lua_stack(param_1,aLStack320);
    app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar6 = lib::L2CValue::operator==(param_2,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0x74a7103d4);
      lib::L2CValue::L2CValue((L2CValue *)auStack256,0.0);
      lib::L2CValue::L2CValue(aLStack272,1.0);
      lib::L2CValue::L2CValue(aLStack288,false);
      HVar8 = lib::L2CValue::as_hash(aLStack96);
      fVar10 = (float)lib::L2CValue::as_number((L2CValue *)auStack256);
      fVar11 = (float)lib::L2CValue::as_number(aLStack272);
      bVar1 = lib::L2CValue::as_bool(aLStack288);
      app::lua_bind::MotionModule__change_motion_impl
                (param_1->moduleAccessor,HVar8,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue((L2CValue *)auStack256);
      pLVar5 = aLStack96;
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0x74a7103d4);
      HVar8 = lib::L2CValue::as_hash(aLStack96);
      app::lua_bind::MotionModule__change_motion_force_inherit_frame_impl
                (param_1->moduleAccessor,HVar8,-1.0,1.0,0.0);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack272,_WEAPON_CLOUD_WAVE_INSTANCE_WORK_ID_FLAG_ATTACK_POWER_LOW);
      iVar4 = lib::L2CValue::as_integer(aLStack272);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)auStack256,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack96,true);
      uVar6 = lib::L2CValue::operator==((L2CValue *)auStack256,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue((L2CValue *)auStack256);
      lib::L2CValue::~L2CValue(aLStack272);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack256,0xa68069fbe);
        lib::L2CValue::L2CValue(aLStack272,0x1352bd888d);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack256);
        uVar7 = lib::L2CValue::as_integer(aLStack272);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (param_1->moduleAccessor,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack96,fVar10);
        lib::L2CValue::operator=(aLStack112,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue((L2CValue *)auStack256);
        lib::L2CValue::L2CValue((L2CValue *)auStack256,0xa68069fbe);
        lib::L2CValue::L2CValue(aLStack272,0xb00dbe587);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack256);
        uVar7 = lib::L2CValue::as_integer(aLStack272);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (param_1->moduleAccessor,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack96,fVar10);
        lib::L2CValue::operator=(aLStack176,aLStack96);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)auStack256,0xa68069fbe);
        lib::L2CValue::L2CValue(aLStack272,0x17fbf8a5a8);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack256);
        uVar7 = lib::L2CValue::as_integer(aLStack272);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (param_1->moduleAccessor,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack96,fVar10);
        lib::L2CValue::operator=(aLStack112,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue((L2CValue *)auStack256);
        lib::L2CValue::L2CValue((L2CValue *)auStack256,0xa68069fbe);
        lib::L2CValue::L2CValue(aLStack272,0xf6288e146);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack256);
        uVar7 = lib::L2CValue::as_integer(aLStack272);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (param_1->moduleAccessor,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack96,fVar10);
        lib::L2CValue::operator=(aLStack176,aLStack96);
      }
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack272);
      pLVar5 = (L2CValue *)auStack256;
    }
    lib::L2CValue::~L2CValue(pLVar5);
    lib::L2CValue::L2CValue(aLStack272,_WEAPON_INSTANCE_WORK_ID_INT_CUSTOMIZE_NO);
    iVar4 = lib::L2CValue::as_integer(aLStack272);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(param_1->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,iVar4);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar6 = lib::L2CValue::operator==((L2CValue *)auStack256,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    lib::L2CValue::~L2CValue(aLStack272);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0x17ab916041);
      lib::L2CValue::operator=((L2CValue *)(auStack256 + 0x10),aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0x17b924cfaf);
      lib::L2CValue::operator=(aLStack192,aLStack96);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0x14470e9e77);
      lib::L2CValue::operator=((L2CValue *)(auStack256 + 0x10),aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0x14de07cfcd);
      lib::L2CValue::operator=(aLStack192,aLStack96);
    }
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,true);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,true);
    HVar8 = lib::L2CValue::as_hash((L2CValue *)(auStack256 + 0x10));
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    bVar2 = lib::L2CValue::as_bool((L2CValue *)auStack256);
    app::lua_bind::EffectModule__kill_kind_impl
              (param_1->moduleAccessor,HVar8,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_MA_MSC_CMD_EFFECT_EFFECT_FOLLOW);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,0x31ed91fca);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    lib::L2CValue::L2CValue(aLStack368,0.0);
    lib::L2CValue::L2CValue(aLStack384,1.0);
    lib::L2CValue::L2CValue(aLStack400,false);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack96);
    lib::L2CAgent::push_lua_stack(param_1,aLStack192);
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack256);
    lib::L2CAgent::push_lua_stack(param_1,aLStack272);
    lib::L2CAgent::push_lua_stack(param_1,aLStack288);
    lib::L2CAgent::push_lua_stack(param_1,aLStack304);
    lib::L2CAgent::push_lua_stack(param_1,aLStack320);
    lib::L2CAgent::push_lua_stack(param_1,aLStack352);
    lib::L2CAgent::push_lua_stack(param_1,aLStack368);
    lib::L2CAgent::push_lua_stack(param_1,aLStack384);
    lib::L2CAgent::push_lua_stack(param_1,aLStack400);
    app::sv_module_access::effect(param_1->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_1,1);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_CLOUD_WAVE_INSTANCE_WORK_ID_INT_EFFECT_KIND);
    lVar9 = lib::L2CValue::as_integer(aLStack192);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int64_impl(param_1->moduleAccessor,lVar9,iVar4);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar6 = lib::L2CValue::operator==(param_2,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,false);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    fVar10 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)auStack256);
    app::lua_bind::AttackModule__set_power_impl
              (param_1->moduleAccessor,iVar4,fVar10,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,1);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,false);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    fVar10 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)auStack256);
    app::lua_bind::AttackModule__set_power_impl
              (param_1->moduleAccessor,iVar4,fVar10,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    fVar10 = (float)lib::L2CValue::as_number(aLStack176);
    app::lua_bind::AttackModule__set_size_impl(param_1->moduleAccessor,iVar4,fVar10);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,1);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    fVar10 = (float)lib::L2CValue::as_number(aLStack176);
    app::lua_bind::AttackModule__set_size_impl(param_1->moduleAccessor,iVar4,fVar10);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::~L2CValue((L2CValue *)(auStack256 + 0x10));
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue((L2CValue *)auStack160);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

