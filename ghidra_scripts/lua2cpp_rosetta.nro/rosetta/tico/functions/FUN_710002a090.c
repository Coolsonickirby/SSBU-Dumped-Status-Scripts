
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002a090(L2CAgent *param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
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
  L2CValue aLStack256 [16];
  undefined auStack240 [32];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_ROSETTA_TICO_KINETIC_ENERGY_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack96);
  fVar11 = (float)app::sv_kinetic_energy::get_speed_length(param_1->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack112,fVar11);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_INT_ATTACKER_COLOR);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  ppBVar10 = &param_1->moduleAccessor;
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar4);
  lib::L2CValue::L2CValue(aLStack128,iVar4);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack144,false);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_INT_AURA_COLOR);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar4);
  lib::L2CValue::L2CValue(aLStack96,iVar4);
  uVar6 = lib::L2CValue::operator==(aLStack128,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack160);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,true);
    lib::L2CValue::operator=(aLStack144,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  bVar2 = app::lua_bind::StopModule__is_stop_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  bVar3 = (bVar3 & 1U) == 0;
  if (bVar3) {
    bVar2 = app::lua_bind::SlowModule__is_skip_impl(*ppBVar10);
    lib::L2CValue::L2CValue(aLStack176,(bool)(bVar2 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack176);
  }
  else {
    bVar2 = 1;
  }
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
  if (bVar3) {
    lib::L2CValue::~L2CValue(aLStack176);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack192,false);
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar6 = lib::L2CValue::operator==(aLStack160,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
LAB_710002a5e0:
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::L2CValue(aLStack208,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_INT_AURA_FRAME);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    iVar5 = lib::L2CValue::as_integer(aLStack208);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar4,iVar5);
    lib::L2CValue::~L2CValue(aLStack208);
  }
  else {
    lib::L2CValue::L2CValue(aLStack208,0x6e5ec7051);
    lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),0x1565955085);
    uVar6 = lib::L2CValue::as_integer(aLStack208);
    uVar7 = lib::L2CValue::as_integer((L2CValue *)(auStack240 + 0x10));
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack96,fVar11);
    uVar6 = lib::L2CValue::operator<=(aLStack96,aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
    lib::L2CValue::~L2CValue(aLStack208);
    if ((uVar6 & 1) == 0) goto LAB_710002a5e0;
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack240 + 0x10),
               _WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_FLAG_ENABLE_AURA);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack240 + 0x10));
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue(aLStack208,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar6 = lib::L2CValue::operator==(aLStack208,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,true);
      lib::L2CValue::operator=(aLStack192,aLStack96);
      lVar1 = -0x50;
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_INT_AURA_FRAME);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue(aLStack208,iVar4);
      lib::L2CValue::~L2CValue(aLStack96);
      fVar11 = (float)app::lua_bind::PostureModule__pos_x_impl(*ppBVar10);
      lib::L2CValue::L2CValue((L2CValue *)auStack240,fVar11);
      lib::L2CValue::L2CValue
                (aLStack272,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_FLOAT_FLY_START_POS_X);
      iVar4 = lib::L2CValue::as_integer(aLStack272);
      fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue(aLStack256,fVar11);
      lib::L2CValue::operator-((L2CValue *)auStack240,aLStack256);
      fVar11 = (float)app::lua_bind::PostureModule__pos_y_impl(*ppBVar10);
      lib::L2CValue::L2CValue(aLStack304,fVar11);
      lib::L2CValue::L2CValue
                (aLStack336,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_FLOAT_FLY_START_POS_Y);
      iVar4 = lib::L2CValue::as_integer(aLStack336);
      fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue(aLStack320,fVar11);
      lib::L2CValue::operator-(aLStack304,aLStack320);
      lib::L2CValue::L2CValue(aLStack352,0.0);
      fVar11 = (float)lib::L2CValue::as_number(aLStack96);
      fVar12 = (float)lib::L2CValue::as_number(aLStack288);
      fVar13 = (float)lib::L2CValue::as_number(aLStack352);
      fVar11 = (float)app::sv_math::vec3_length(fVar11,fVar12,fVar13);
      lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),fVar11);
      lib::L2CValue::~L2CValue(aLStack352);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack320);
      lib::L2CValue::~L2CValue(aLStack336);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue((L2CValue *)auStack240);
      lib::L2CValue::L2CValue((L2CValue *)auStack240,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack256,0x15df4b92be);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack240);
      uVar7 = lib::L2CValue::as_integer(aLStack256);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack96,iVar4);
      uVar6 = lib::L2CValue::operator<=(aLStack96,aLStack208);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack256);
        pLVar8 = (L2CValue *)auStack240;
LAB_710002a660:
        lib::L2CValue::~L2CValue(pLVar8);
      }
      else {
        lib::L2CValue::L2CValue(aLStack288,0x6e5ec7051);
        lib::L2CValue::L2CValue(aLStack304,0x16c81b0d9a);
        uVar6 = lib::L2CValue::as_integer(aLStack288);
        uVar7 = lib::L2CValue::as_integer(aLStack304);
        fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack272,fVar11);
        uVar6 = lib::L2CValue::operator<=(aLStack272,(L2CValue *)(auStack240 + 0x10));
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack256);
        lib::L2CValue::~L2CValue((L2CValue *)auStack240);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,true);
          lib::L2CValue::operator=(aLStack192,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::L2CValue
                    (aLStack96,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_FLAG_ENABLE_AURA);
          iVar4 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar10,iVar4);
          pLVar8 = aLStack96;
          goto LAB_710002a660;
        }
      }
      lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
      lVar1 = -0xc0;
    }
    lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar6 = lib::L2CValue::operator==(aLStack192,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack240 + 0x10),
                 _WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_DEAD_DAMAGE);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack240 + 0x10));
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar4);
      lib::L2CValue::L2CValue(aLStack208,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar6 = lib::L2CValue::operator==(aLStack208,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,false);
        lib::L2CValue::operator=(aLStack192,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
      }
    }
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_INT_AURA_FRAME);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__inc_int_impl(*ppBVar10,iVar4);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_INT_AURA_EFFECT_HANDLE);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar4);
  lib::L2CValue::L2CValue(aLStack208,iVar4);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar6 = lib::L2CValue::operator==(aLStack192,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_EF_NULL);
    uVar6 = lib::L2CValue::operator==(aLStack208,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,true);
      uVar6 = lib::L2CValue::operator==(aLStack144,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_MA_MSC_EFFECT_REMOVE);
        lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),0);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack96);
        lib::L2CAgent::push_lua_stack(param_1,aLStack208);
        lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)(auStack240 + 0x10));
        app::sv_module_access::effect(param_1->luaStateAgent);
        lib::L2CAgent::pop_lua_stack(param_1,1);
        lib::L2CValue::~L2CValue(aLStack384);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_EF_NULL);
        lib::L2CValue::operator=(aLStack208,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
      }
    }
    lib::L2CValue::L2CValue(aLStack96,_EF_NULL);
    uVar6 = lib::L2CValue::operator==(aLStack208,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) goto LAB_710002ab74;
    lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),_MA_MSC_EFFECT_REQUEST_FOLLOW);
    lib::L2CValue::L2CValue((L2CValue *)auStack240,0x19660c02c1);
    lib::L2CValue::L2CValue(aLStack256,0x570211ebd);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CValue::L2CValue(aLStack336,0.0);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    lib::L2CValue::L2CValue(aLStack400,1.0);
    lib::L2CValue::L2CValue(aLStack416,true);
    lib::L2CValue::L2CValue(aLStack432,_EFFECT_SUB_ATTRIBUTE_CONCLUDE_STATUS);
    lib::L2CValue::L2CValue(aLStack448,0);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)(auStack240 + 0x10));
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)auStack240);
    lib::L2CAgent::push_lua_stack(param_1,aLStack256);
    lib::L2CAgent::push_lua_stack(param_1,aLStack272);
    lib::L2CAgent::push_lua_stack(param_1,aLStack288);
    lib::L2CAgent::push_lua_stack(param_1,aLStack304);
    lib::L2CAgent::push_lua_stack(param_1,aLStack320);
    lib::L2CAgent::push_lua_stack(param_1,aLStack336);
    lib::L2CAgent::push_lua_stack(param_1,aLStack352);
    lib::L2CAgent::push_lua_stack(param_1,aLStack400);
    lib::L2CAgent::push_lua_stack(param_1,aLStack416);
    lib::L2CAgent::push_lua_stack(param_1,aLStack432);
    lib::L2CAgent::push_lua_stack(param_1,aLStack448);
    lib::L2CAgent::push_lua_stack(param_1,aLStack128);
    app::sv_module_access::effect(param_1->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_1,1);
    lib::L2CValue::operator=(aLStack208,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack448);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue((L2CValue *)auStack240);
    lVar1 = -0xd0;
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_EF_NULL);
    uVar6 = lib::L2CValue::operator==(aLStack208,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) goto LAB_710002ab74;
    lib::L2CValue::L2CValue(aLStack96,_MA_MSC_EFFECT_REMOVE);
    lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),0x12);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack96);
    lib::L2CAgent::push_lua_stack(param_1,aLStack208);
    lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)(auStack240 + 0x10));
    app::sv_module_access::effect(param_1->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_1,1);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_EF_NULL);
    lib::L2CValue::operator=(aLStack208,aLStack96);
    lVar1 = -0x50;
  }
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
LAB_710002ab74:
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_INT_AURA_EFFECT_HANDLE);
  iVar4 = lib::L2CValue::as_integer(aLStack208);
  pLVar8 = (L2CValue *)lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar4,(int)pLVar8);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_EF_NULL);
  uVar6 = lib::L2CValue::operator==(aLStack208,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_ALL);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),fVar11);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_ALL);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    fVar11 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar10,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack240,fVar11);
    lib::L2CValue::~L2CValue(aLStack96);
    pLVar9 = (L2CValue *)(auStack240 + 0x10);
    lib::L2CAgent::math_atan((L2CAgent *)auStack240,pLVar9,pLVar8);
    lib::L2CAgent::math_deg((L2CAgent *)aLStack96,pLVar9);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_EF_NULL);
    uVar6 = lib::L2CValue::operator==(aLStack208,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_MA_MSC_EFFECT_SET_ROT);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::L2CValue(aLStack288,90.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack96);
      lib::L2CAgent::push_lua_stack(param_1,aLStack208);
      lib::L2CAgent::push_lua_stack(param_1,aLStack272);
      lib::L2CAgent::push_lua_stack(param_1,aLStack288);
      lib::L2CAgent::push_lua_stack(param_1,aLStack256);
      app::sv_module_access::effect(param_1->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_1,1);
      lib::L2CValue::~L2CValue(aLStack464);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_INT_AURA_COLOR);
    iVar4 = lib::L2CValue::as_integer(aLStack128);
    iVar5 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar4,iVar5);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue((L2CValue *)auStack240);
    lVar1 = -0xd0;
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,-1);
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack240 + 0x10),
               _WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_INT_AURA_COLOR);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)(auStack240 + 0x10));
    app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar4,iVar5);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
    lVar1 = -0x50;
  }
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

