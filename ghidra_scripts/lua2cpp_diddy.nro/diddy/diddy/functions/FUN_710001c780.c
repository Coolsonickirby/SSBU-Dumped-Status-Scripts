
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710001c780(L2CFighterDiddy *this,L2CValue *return_value)

{
  float *pfVar1;
  L2CValue *pLVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined4 local_50 [4];
  
  pfVar1 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,*pfVar1);
  lib::L2CValue::L2CValue(aLStack128,pfVar1[1]);
  lib::L2CValue::L2CValue(aLStack112,pfVar1[2]);
  FUN_710001a810(aLStack96,this,aLStack144);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  local_50[0] = app::sv_camera_manager::dead_range(this->luaStateAgent);
  app::lua_bind::lib__Rect__store_l2c_table_impl((Rect *)local_50);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x1fbdb2615);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x31ed91fca);
  uVar4 = lib::L2CValue::operator<(pLVar3,pLVar2);
  if ((uVar4 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x1fbdb2615);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x6895f72a4);
    uVar4 = lib::L2CValue::operator<(pLVar2,pLVar3);
    if ((uVar4 & 1) == 0) {
      pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x18cdc1683);
      pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x5b4ca7514);
      uVar4 = lib::L2CValue::operator<(pLVar3,pLVar2);
      if ((uVar4 & 1) == 0) {
        pLVar2 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x18cdc1683);
        pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack160,0x47a67e768);
        uVar4 = lib::L2CValue::operator<(pLVar2,pLVar3);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          goto LAB_710001c968;
        }
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)local_50,_FIGHTER_DIDDY_STATUS_KIND_FINAL_WAIT_FLY);
  lib::L2CValue::L2CValue(aLStack176,false);
  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x50);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue((L2CValue *)local_50);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710001c968:
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

