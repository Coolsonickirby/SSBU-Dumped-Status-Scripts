
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710001bb20(L2CFighterTrail *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  L2CTable *this_00;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  L2CValue *in_x1;
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue *local_b8;
  L2CValue *local_b0;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack264,in_x1);
  lib::L2CValue::L2CValue(aLStack216,_FIGHTER_APPEAL_KIND_U);
  uVar3 = lib::L2CValue::operator==(aLStack264,aLStack216);
  lib::L2CValue::~L2CValue(aLStack216);
  if ((uVar3 & 1) != 0) {
    this_00 = (L2CTable *)operator.new(0x48);
    lib::L2CTable::L2CTable(this_00,3);
    lib::L2CValue::L2CValue(aLStack112,this_00);
    lib::L2CValue::L2CValue(aLStack216,2);
    lib::L2CValue::L2CValue((L2CValue *)&local_b8,3);
    lib::L2CValue::L2CValue(aLStack96,1);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,1);
    lib::L2CValue::operator=(pLVar4,aLStack216);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,2);
    lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_b8);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,3);
    lib::L2CValue::operator=(pLVar4,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue((L2CValue *)&local_b8);
    lib::L2CValue::~L2CValue(aLStack216);
    lib::L2CValue::L2CValue(aLStack216,_FIGHTER_TRAIL_INSTANCE_WORK_ID_INT_APPEAL_HI_KIND);
    iVar1 = lib::L2CValue::as_integer(aLStack216);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack96,iVar1);
    lib::L2CValue::~L2CValue(aLStack216);
    lib::L2CValue::L2CValue(aLStack216,_FIGHTER_TRAIL_INSTANCE_WORK_ID_INT_APPEAL_HI_INFO);
    iVar1 = lib::L2CValue::as_integer(aLStack216);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack128,iVar1);
    lib::L2CValue::~L2CValue(aLStack216);
    lib::L2CValue::L2CValue(aLStack216,0xffffff);
    lib::L2CValue::operator&(aLStack128,aLStack216);
    lib::L2CValue::~L2CValue(aLStack216);
    lib::L2CValue::L2CValue(aLStack216,1);
    lib::L2CValue::operator+(aLStack144,aLStack216);
    lib::L2CValue::~L2CValue(aLStack216);
    lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_b8);
    lib::L2CValue::~L2CValue((L2CValue *)&local_b8);
    lib::L2CValue::L2CValue(aLStack216,3);
    uVar3 = lib::L2CValue::operator<(aLStack216,aLStack144);
    lib::L2CValue::~L2CValue(aLStack216);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack216,1);
      lib::L2CValue::operator=(aLStack144,aLStack216);
      lib::L2CValue::~L2CValue(aLStack216);
    }
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack112,aLStack144);
    lib::L2CValue::operator=(aLStack96,pLVar4);
    lib::L2CValue::L2CValue(aLStack216,0x30000000);
    lib::L2CValue::operator&(aLStack128,aLStack216);
    lib::L2CValue::~L2CValue(aLStack216);
    lib::L2CValue::L2CValue(aLStack216,0x1c);
    lib::L2CValue::operator>>((L2CValue *)&local_b8,aLStack216);
    lib::L2CValue::~L2CValue(aLStack216);
    lib::L2CValue::~L2CValue((L2CValue *)&local_b8);
    lib::L2CValue::L2CValue(aLStack216,0);
    uVar3 = lib::L2CValue::operator==(aLStack160,aLStack216);
    lib::L2CValue::~L2CValue(aLStack216);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::operator=(aLStack96,aLStack160);
      lib::L2CAgent::ipairs((L2CAgent *)this,aLStack112);
      pLVar4 = local_b0;
      if (local_b8 != local_b0) {
        pLVar5 = local_b8;
        do {
          lib::L2CValue::L2CValue(aLStack216,pLVar5);
          lib::L2CValue::L2CValue(aLStack200,pLVar5 + 0x10);
          lib::L2CValue::L2CValue(aLStack232,aLStack216);
          lib::L2CValue::L2CValue(aLStack248,aLStack200);
          uVar3 = lib::L2CValue::operator==(aLStack96,aLStack248);
          if ((uVar3 & 1) != 0) {
            lib::L2CValue::operator=(aLStack144,aLStack232);
            lib::L2CValue::~L2CValue(aLStack248);
            lib::L2CValue::~L2CValue(aLStack232);
            lib::L2CValue::~L2CValue(aLStack200);
            lib::L2CValue::~L2CValue(aLStack216);
            break;
          }
          lib::L2CValue::~L2CValue(aLStack248);
          lib::L2CValue::~L2CValue(aLStack232);
          lib::L2CValue::~L2CValue(aLStack200);
          lib::L2CValue::~L2CValue(aLStack216);
          pLVar5 = pLVar5 + 0x20;
        } while (pLVar5 != pLVar4);
      }
      pLVar4 = local_b8;
      if (local_b8 != (L2CValue *)0x0) {
        while (local_b0 != pLVar4) {
          pLVar5 = local_b0 + -0x10;
          local_b0 = local_b0 + -0x20;
          lib::L2CValue::~L2CValue(pLVar5);
          lib::L2CValue::~L2CValue(local_b0);
        }
        local_b0 = pLVar4;
        operator.delete(local_b8);
      }
      lib::L2CValue::L2CValue(aLStack216,0x1c);
      lib::L2CValue::operator<<(aLStack160,aLStack216);
      lib::L2CValue::~L2CValue(aLStack216);
      lib::L2CValue::operator|(aLStack144,aLStack232);
      lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_b8);
      lib::L2CValue::~L2CValue((L2CValue *)&local_b8);
      lib::L2CValue::~L2CValue(aLStack232);
    }
    lib::L2CValue::operator=(aLStack128,aLStack144);
    lib::L2CValue::L2CValue(aLStack216,_FIGHTER_TRAIL_INSTANCE_WORK_ID_INT_APPEAL_HI_INFO);
    iVar1 = lib::L2CValue::as_integer(aLStack128);
    iVar2 = lib::L2CValue::as_integer(aLStack216);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
    lib::L2CValue::~L2CValue(aLStack216);
    lib::L2CValue::L2CValue(aLStack216,_FIGHTER_TRAIL_INSTANCE_WORK_ID_INT_APPEAL_HI_KIND);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    iVar2 = lib::L2CValue::as_integer(aLStack216);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
    lib::L2CValue::~L2CValue(aLStack216);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::~L2CValue(aLStack264);
  return;
}

