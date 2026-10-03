
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001b3e0(L2CValue *param_1,void *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  float fVar6;
  float fVar7;
  float fVar8;
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
  
  lib::L2CValue::operator-(param_4,param_3);
  lib::L2CValue::L2CValue(aLStack160,-180.0);
  lib::L2CValue::L2CValue(aLStack176,180.0);
  fVar6 = (float)lib::L2CValue::as_number(aLStack128);
  fVar7 = (float)lib::L2CValue::as_number(aLStack160);
  fVar8 = (float)lib::L2CValue::as_number(aLStack176);
  fVar6 = (float)app::sv_math::wrapf(fVar6,fVar7,fVar8);
  lib::L2CValue::L2CValue(aLStack144,fVar6);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack160,param_3);
  lib::L2CValue::L2CValue(aLStack192,0xcedec4cee);
  lib::L2CValue::L2CValue(aLStack208,0x10f29683e1);
  uVar3 = lib::L2CValue::as_integer(aLStack192);
  uVar4 = lib::L2CValue::as_integer(aLStack208);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack128,fVar6);
  lib::L2CValue::L2CValue(aLStack240,aLStack144);
  lua2cpp::L2CFighterBase::sign(param_2,(L2CValue)0x10);
  pLVar5 = aLStack224;
  lib::L2CValue::operator*(aLStack128,pLVar5);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CAgent::math_abs((L2CAgent *)aLStack144,pLVar5);
  lib::L2CAgent::math_abs((L2CAgent *)aLStack176,pLVar5);
  uVar3 = lib::L2CValue::operator<(aLStack128,aLStack192);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::operator+(param_3,aLStack176);
    lib::L2CValue::operator=(aLStack160,aLStack128);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  else {
    lib::L2CValue::operator=(aLStack160,param_4);
  }
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_5);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_EFLAME_ESWORD_STATUS_SPECIAL_S_FLOAT_BASE_ANGLE);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack192,fVar6);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::operator-(aLStack160,param_3);
    lib::L2CValue::L2CValue(aLStack224,-180.0);
    lib::L2CValue::L2CValue(aLStack256,180.0);
    fVar6 = (float)lib::L2CValue::as_number(aLStack128);
    fVar7 = (float)lib::L2CValue::as_number(aLStack224);
    fVar8 = (float)lib::L2CValue::as_number(aLStack256);
    fVar6 = (float)app::sv_math::wrapf(fVar6,fVar7,fVar8);
    lib::L2CValue::L2CValue(aLStack208,fVar6);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,0);
    uVar3 = lib::L2CValue::operator<(aLStack128,aLStack208);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack256,0xcedec4cee);
      lib::L2CValue::L2CValue(aLStack272,0xb17575353);
      uVar3 = lib::L2CValue::as_integer(aLStack256);
      uVar4 = lib::L2CValue::as_integer(aLStack272);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack128,fVar6);
      lib::L2CValue::operator-(aLStack192,aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::operator-(param_3,aLStack224);
      lib::L2CValue::L2CValue(aLStack288,-180.0);
      lib::L2CValue::L2CValue(aLStack304,180.0);
      fVar6 = (float)lib::L2CValue::as_number(aLStack272);
      fVar7 = (float)lib::L2CValue::as_number(aLStack288);
      fVar8 = (float)lib::L2CValue::as_number(aLStack304);
      fVar6 = (float)app::sv_math::wrapf(fVar6,fVar7,fVar8);
      lib::L2CValue::L2CValue(aLStack256,fVar6);
      lib::L2CValue::L2CValue(aLStack128,0);
      uVar3 = lib::L2CValue::operator<=(aLStack128,aLStack256);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack272);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::operator-(aLStack160,aLStack224);
        lib::L2CValue::L2CValue(aLStack288,-180.0);
        lib::L2CValue::L2CValue(aLStack304,180.0);
        fVar6 = (float)lib::L2CValue::as_number(aLStack272);
        fVar7 = (float)lib::L2CValue::as_number(aLStack288);
        fVar8 = (float)lib::L2CValue::as_number(aLStack304);
        fVar6 = (float)app::sv_math::wrapf(fVar6,fVar7,fVar8);
        lib::L2CValue::L2CValue(aLStack256,fVar6);
        lib::L2CValue::L2CValue(aLStack128,0);
        uVar3 = lib::L2CValue::operator<(aLStack256,aLStack128);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack256);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::~L2CValue(aLStack272);
        if ((uVar3 & 1) != 0) {
          lib::L2CValue::L2CValue(param_1,aLStack224);
          lib::L2CValue::L2CValue(param_1 + 0x10,true);
          goto LAB_710001ba78;
        }
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack256,0xcedec4cee);
      lib::L2CValue::L2CValue(aLStack272,0xb17575353);
      uVar3 = lib::L2CValue::as_integer(aLStack256);
      uVar4 = lib::L2CValue::as_integer(aLStack272);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack128,fVar6);
      lib::L2CValue::operator+(aLStack192,aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::operator-(param_3,aLStack224);
      lib::L2CValue::L2CValue(aLStack288,-180.0);
      lib::L2CValue::L2CValue(aLStack304,180.0);
      fVar6 = (float)lib::L2CValue::as_number(aLStack272);
      fVar7 = (float)lib::L2CValue::as_number(aLStack288);
      fVar8 = (float)lib::L2CValue::as_number(aLStack304);
      fVar6 = (float)app::sv_math::wrapf(fVar6,fVar7,fVar8);
      lib::L2CValue::L2CValue(aLStack256,fVar6);
      lib::L2CValue::L2CValue(aLStack128,0);
      uVar3 = lib::L2CValue::operator<=(aLStack256,aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack304);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack272);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::operator-(aLStack160,aLStack224);
        lib::L2CValue::L2CValue(aLStack288,-180.0);
        lib::L2CValue::L2CValue(aLStack304,180.0);
        fVar6 = (float)lib::L2CValue::as_number(aLStack272);
        fVar7 = (float)lib::L2CValue::as_number(aLStack288);
        fVar8 = (float)lib::L2CValue::as_number(aLStack304);
        fVar6 = (float)app::sv_math::wrapf(fVar6,fVar7,fVar8);
        lib::L2CValue::L2CValue(aLStack256,fVar6);
        lib::L2CValue::L2CValue(aLStack128,0);
        uVar3 = lib::L2CValue::operator<(aLStack128,aLStack256);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack256);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::~L2CValue(aLStack272);
        if ((uVar3 & 1) != 0) {
          lib::L2CValue::L2CValue(param_1,aLStack224);
          lib::L2CValue::L2CValue(param_1 + 0x10,true);
LAB_710001ba78:
          lib::L2CValue::~L2CValue(aLStack224);
          lib::L2CValue::~L2CValue(aLStack208);
          lib::L2CValue::~L2CValue(aLStack192);
          goto LAB_710001bac4;
        }
      }
    }
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
  }
  lib::L2CValue::L2CValue(param_1,aLStack160);
  lib::L2CValue::L2CValue(param_1 + 0x10,false);
LAB_710001bac4:
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  return;
}

