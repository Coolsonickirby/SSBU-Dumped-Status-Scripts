
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100003100(L2CFighterInkling *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  Hash40 HVar4;
  L2CValue *in_x1;
  L2CValue *in_x2;
  L2CValue *in_x3;
  L2CValue *in_x4;
  L2CValue *in_x5;
  uint uVar5;
  float fVar6;
  long lVar7;
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
  ulong local_70;
  ulong uStack104;
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack240,in_x1);
  lib::L2CValue::L2CValue(aLStack256,in_x2);
  lib::L2CValue::L2CValue(aLStack272,in_x3);
  lib::L2CValue::L2CValue(aLStack288,in_x4);
  lib::L2CValue::L2CValue(aLStack304,in_x5);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INSTANCE_WORK_ID_FLAG_DEAD_AREA_OUT);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
  uVar3 = lib::L2CValue::operator==((L2CValue *)&local_70,(L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,0xd5852b3ac);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,EFFECT_SUB_ATTRIBUTE_NONE);
    lib::L2CValue::L2CValue(aLStack224,-1);
    HVar4 = lib::L2CValue::as_hash(aLStack144);
    uVar3 = lib::L2CValue::as_number(aLStack240);
    lVar7 = lib::L2CValue::as_number(aLStack256);
    uVar5 = lib::L2CValue::as_number(aLStack272);
    local_60 = uVar3 & 0xffffffff | lVar7 << 0x20;
    uStack88 = (ulong)uVar5;
    uVar3 = lib::L2CValue::as_number(aLStack160);
    lVar7 = lib::L2CValue::as_number(aLStack176);
    uVar5 = lib::L2CValue::as_number(aLStack192);
    local_70 = uVar3 & 0xffffffff | lVar7 << 0x20;
    uStack104 = (ulong)uVar5;
    fVar6 = (float)lib::L2CValue::as_number(aLStack304);
    uVar5 = lib::L2CValue::as_integer(aLStack208);
    iVar2 = lib::L2CValue::as_integer(aLStack224);
    uVar5 = app::lua_bind::EffectModule__req_impl
                      (this->moduleAccessor,HVar4,(Vector3f *)&local_60,(Vector3f *)&local_70,fVar6,
                       uVar5,iVar2,false,0);
    lib::L2CValue::L2CValue(aLStack128,uVar5);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_INK_R);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_INK_G);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_INK_B);
    FUN_7100003500(this,&local_60,&local_70,aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  return;
}

