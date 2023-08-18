
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterKirby::status::Walk_pre(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *this_00;
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
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KIRBY_INSTANCE_WORK_ID_FLAG_COPY);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack272,true);
  uVar3 = lib::L2CValue::operator__(aLStack112,aLStack272);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack272,_FIGHTER_KIRBY_INSTANCE_WORK_ID_INT_COPY_CHARA);
    iVar2 = lib::L2CValue::as_integer(aLStack272);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack400,iVar2);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::L2CValue(aLStack272,_FIGHTER_KIND_PICKEL);
    uVar3 = lib::L2CValue::operator__(aLStack400,aLStack272);
    lib::L2CValue::_L2CValue(aLStack272);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLAG);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_INT);
      lib::L2CValue::L2CValue(aLStack144,FIGHTER_STATUS_WORK_KEEP_FLAG_NONE_FLOAT);
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_TYPE_MOTION_LOOP);
      lib::L2CValue::L2CValue(aLStack176,0);
      FUN_7100222af0(aLStack192,this);
      lib::L2CValue::L2CValue(aLStack272,true);
      uVar3 = lib::L2CValue::operator__(aLStack192,aLStack272);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack192,aLStack176);
        FUN_7100222eb0(aLStack272,aLStack192);
        lib::L2CValue::operator_(aLStack112,aLStack272);
        lib::L2CValue::operator_(aLStack128,aLStack256);
        lib::L2CValue::operator_(aLStack144,aLStack240);
        lib::L2CValue::operator_(aLStack160,aLStack224);
        lib::L2CValue::operator_(aLStack176,aLStack208);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack192);
      }
      lib::L2CValue::L2CValue(aLStack272,aLStack112);
      lib::L2CValue::L2CValue(aLStack288,aLStack128);
      lib::L2CValue::L2CValue(aLStack304,aLStack144);
      lib::L2CValue::L2CValue(aLStack320,0);
      lib::L2CValue::L2CValue(aLStack336,_GROUND_CORRECT_KIND_GROUND_OTTOTTO);
      lib::L2CValue::L2CValue(aLStack352,aLStack160);
      lib::L2CValue::L2CValue(aLStack368,aLStack176);
      lib::L2CValue::L2CValue(aLStack384,0);
      lua2cpp::L2CFighterCommon::sub_pre_Walk_param
                (this,(L2CValue)0xf0,(L2CValue)0xe0,(L2CValue)0xd0,(L2CValue)0xc0,(L2CValue)0xb0,
                 (L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      this_00 = aLStack400;
      goto LAB_7100027f60;
    }
    lib::L2CValue::_L2CValue(aLStack400);
  }
  lua2cpp::L2CFighterCommon::status_pre_Walk(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  this_00 = aLStack272;
LAB_7100027f60:
  lib::L2CValue::_L2CValue(this_00);
  return;
}

