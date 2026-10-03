
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100020960(L2CValue *param_1,void *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  L2CValue *pLVar4;
  L2CValue *this;
  L2CValue *this_00;
  L2CValue *this_01;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  undefined auStack256 [32];
  undefined auStack224 [32];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  
  uVar2 = lib::L2CValue::as_integer(param_3);
  uVar12 = app::lua_bind::GroundModule__get_touch_normal_impl
                     (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar2);
  lib::L2CValue::L2CValue(aLStack192,(float)uVar12);
  lib::L2CValue::L2CValue(aLStack176,(float)((ulong)uVar12 >> 0x20));
  lib::L2CValue::L2CValue(aLStack128,aLStack192);
  lib::L2CValue::L2CValue(aLStack144,aLStack176);
  lua2cpp::L2CFighterBase::Vector2__create(param_2,(L2CValue)0x80,(L2CValue)0x70);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack192);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](param_4,0x18cdc1683);
  this = (L2CValue *)lib::L2CValue::operator[](param_4,0x1fbdb2615);
  this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
  pLVar7 = (L2CValue *)0x1fbdb2615;
  this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
  fVar8 = (float)lib::L2CValue::as_number(pLVar4);
  fVar9 = (float)lib::L2CValue::as_number(this);
  fVar10 = (float)lib::L2CValue::as_number(this_00);
  fVar11 = (float)lib::L2CValue::as_number(this_01);
  fVar8 = (float)app::sv_math::vec2_angle(fVar8,fVar9,fVar10,fVar11);
  lib::L2CValue::L2CValue(aLStack128,fVar8);
  lib::L2CValue::L2CValue((L2CValue *)auStack224,90.0);
  lib::L2CAgent::math_rad((L2CAgent *)auStack224,pLVar7);
  lib::L2CValue::operator-(aLStack128,(L2CValue *)(auStack224 + 0x10));
  lib::L2CValue::L2CValue(aLStack272,0x1086bc4a93);
  pLVar4 = (L2CValue *)lib::L2CValue::as_integer(aLStack272);
  uVar5 = lib::L2CValue::as_integer(param_5);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),(ulong)pLVar4,
                            uVar5);
  lib::L2CValue::L2CValue((L2CValue *)auStack256,fVar8);
  lib::L2CAgent::math_rad((L2CAgent *)auStack256,pLVar4);
  uVar5 = lib::L2CValue::operator<=((L2CValue *)(auStack256 + 0x10),aLStack144);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack256 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack256);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack224);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(param_1,false);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),0x1086bc4a93);
    lib::L2CValue::L2CValue((L2CValue *)auStack224,0x20cb9d0153);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)(auStack224 + 0x10));
    uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack224);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack144,fVar8);
    lib::L2CValue::~L2CValue((L2CValue *)auStack224);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x18cdc1683);
    lib::L2CValue::operator*(pLVar4,aLStack144);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack224,_FIGHTER_DIDDY_STATUS_SPECIAL_HI_WORK_FLOAT_EXPLOSION_SPD_X);
    fVar8 = (float)lib::L2CValue::as_number((L2CValue *)(auStack224 + 0x10));
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack224);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),fVar8,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)auStack224);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x1fbdb2615);
    lib::L2CValue::operator*(pLVar4,aLStack144);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack224,_FIGHTER_DIDDY_STATUS_SPECIAL_HI_WORK_FLOAT_EXPLOSION_SPD_Y);
    fVar8 = (float)lib::L2CValue::as_number((L2CValue *)(auStack224 + 0x10));
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack224);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),fVar8,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)auStack224);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack224 + 0x10),_FIGHTER_DIDDY_STATUS_KIND_SPECIAL_HI_HIT_CEIL);
    lib::L2CValue::L2CValue((L2CValue *)auStack224,false);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack224 + 0x10));
    bVar1 = lib::L2CValue::as_bool((L2CValue *)auStack224);
    bVar1 = app::lua_bind::StatusModule__change_status_request_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3,
                       (bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack288,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue((L2CValue *)auStack224);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack224 + 0x10));
    lib::L2CValue::L2CValue(param_1,true);
    lib::L2CValue::~L2CValue(aLStack144);
  }
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack160);
  return;
}

