
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710008ae40(undefined8 param_1,L2CAgent *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  BattleObjectModuleAccessor *pBVar4;
  float fVar5;
  undefined8 uVar6;
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
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
  undefined auStack288 [32];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  undefined auStack160 [32];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  FUN_710008b7a0(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),aLStack128);
  lua2cpp::L2CFighterBase::Vector2__length(param_2,(L2CValue)0x70);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_TANTAN_RING_INSTANCE_WORK_ID_FLOAT_ANGLE);
  pLVar2 = (L2CValue *)lib::L2CValue::as_integer(aLStack96);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,(int)pLVar2);
  lib::L2CValue::L2CValue((L2CValue *)auStack160,fVar5);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CAgent::math_cos((L2CAgent *)auStack160,pLVar2);
  lib::L2CValue::operator*(aLStack112,param_3);
  fVar5 = (float)app::lua_bind::PostureModule__lr_impl(param_2->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,fVar5);
  pLVar2 = aLStack192;
  lib::L2CValue::operator*(aLStack96,pLVar2);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CAgent::math_sin((L2CAgent *)auStack160,pLVar2);
  lib::L2CValue::operator*(aLStack96,param_3);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CAgent::math_cos((L2CAgent *)auStack160,param_3);
  fVar5 = (float)app::lua_bind::PostureModule__lr_impl(param_2->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,fVar5);
  pLVar2 = aLStack112;
  lib::L2CValue::operator*(aLStack96,pLVar2);
  lib::L2CAgent::math_sin((L2CAgent *)auStack160,pLVar2);
  lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x20,(L2CValue)0x10);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)(auStack288 + 0x10),aLStack128);
  lua2cpp::L2CFighterBase::Vector2__normalize(param_2,(L2CValue)0xf0);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack288 + 0x10));
  lib::L2CValue::L2CValue(aLStack304,aLStack208);
  lib::L2CValue::L2CValue(aLStack320,aLStack256);
  pLVar2 = aLStack304;
  lua2cpp::L2CFighterBase::Vector2__dot(param_2,SUB81(pLVar2,0),(L2CValue)0xc0);
  lib::L2CAgent::math_acos((L2CAgent *)aLStack96,pLVar2);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::L2CValue(aLStack400,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack(param_2);
  lib::L2CAgent::push_lua_stack(param_2,aLStack400);
  uVar6 = app::sv_kinetic_energy::get_speed(param_2->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack384,(float)uVar6);
  lib::L2CValue::L2CValue(aLStack368,(float)((ulong)uVar6 >> 0x20));
  lib::L2CValue::L2CValue(aLStack96,aLStack384);
  lib::L2CValue::L2CValue(aLStack112,aLStack368);
  lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0xa0,(L2CValue)0x90);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lua2cpp::L2CFighterBase::Vector2__length(param_2,(L2CValue)0xa0);
  lib::L2CValue::~L2CValue(aLStack352);
  lib::L2CValue::~L2CValue(aLStack368);
  lib::L2CValue::~L2CValue(aLStack384);
  lib::L2CValue::~L2CValue(aLStack400);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack(param_2);
  lib::L2CAgent::push_lua_stack(param_2,aLStack96);
  lib::L2CAgent::push_lua_stack(param_2,aLStack176);
  lib::L2CAgent::push_lua_stack(param_2,aLStack192);
  app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack96);
  pLVar2 = (L2CValue *)auStack288;
  uVar3 = lib::L2CValue::operator==((L2CValue *)auStack288,pLVar2);
  if ((uVar3 & 1) != 0) {
    lib::L2CAgent::math_abs((L2CAgent *)auStack288,pLVar2);
    lib::L2CValue::L2CValue(aLStack96,1e-05);
    uVar3 = lib::L2CValue::operator<(aLStack96,aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack416,aLStack208);
      lib::L2CValue::L2CValue(aLStack432,aLStack256);
      lua2cpp::L2CFighterBase::Vector2__cross(param_2,(L2CValue)0x60,(L2CValue)0x50);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      uVar3 = lib::L2CValue::operator<(aLStack96,aLStack400);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar3 & 1) == 0) {
        fVar5 = (float)app::lua_bind::PostureModule__lr_impl(param_2->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack96,fVar5);
        lib::L2CValue::operator-(aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
      }
      else {
        fVar5 = (float)app::lua_bind::PostureModule__lr_impl(param_2->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack112,fVar5);
      }
      lib::L2CValue::~L2CValue(aLStack400);
      lib::L2CValue::~L2CValue(aLStack432);
      lib::L2CValue::~L2CValue(aLStack416);
      lib::L2CValue::operator/(aLStack336,param_4);
      lib::L2CValue::L2CValue(aLStack464,(L2CValue *)auStack160);
      lib::L2CValue::operator*(aLStack112,(L2CValue *)auStack288);
      lib::L2CValue::operator+((L2CValue *)auStack160,aLStack96);
      lib::L2CValue::operator*(param_5,aLStack400);
      lua2cpp::L2CFighterBase::lerp(param_2,(L2CValue)0x30,(L2CValue)0x20,(L2CValue)0x10);
      lib::L2CValue::~L2CValue(aLStack496);
      lib::L2CValue::~L2CValue(aLStack480);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack464);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::operator+(aLStack448,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_TANTAN_RING_INSTANCE_WORK_ID_FLOAT_ANGLE);
      fVar5 = (float)lib::L2CValue::as_number(aLStack512);
      iVar1 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_float_impl(param_2->moduleAccessor,fVar5,iVar1);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack512);
      lib::L2CValue::~L2CValue(aLStack448);
      lib::L2CValue::~L2CValue(aLStack400);
      lib::L2CValue::~L2CValue(aLStack112);
    }
  }
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_TANTAN_RING_INSTANCE_WORK_ID_FLOAT_THETA);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,fVar5);
  uVar3 = lib::L2CValue::operator<(aLStack96,(L2CValue *)auStack288);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_TANTAN_RING_INSTANCE_WORK_ID_FLAG_TARGET);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(param_2->moduleAccessor,iVar1);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::operator+((L2CValue *)auStack288,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_TANTAN_RING_INSTANCE_WORK_ID_FLOAT_THETA);
  fVar5 = (float)lib::L2CValue::as_number(aLStack112);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(param_2->moduleAccessor,fVar5,iVar1);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,5);
  pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar2);
  app::WeaponSpecializer_TantanRing::check_attach(pBVar4);
  lib::L2CValue::~L2CValue(aLStack336);
  lib::L2CValue::~L2CValue((L2CValue *)auStack288);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue((L2CValue *)auStack160);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

